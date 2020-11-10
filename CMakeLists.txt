cmake_minimum_required(VERSION 3.18)

enable_language(CXX)

project(qlift-c-api LANGUAGES CXX VERSION 0.0.10)

if ("${CMAKE_SYSTEM_NAME}" STREQUAL "Darwin")
    set(CMAKE_OSX_DEPLOYMENT_TARGET "10.13" CACHE STRING "Minimum OS X deployment version" FORCE)
endif()

if(POLICY CMP0074)
    cmake_policy(SET CMP0074 NEW)
endif()

if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()

if(POLICY CMP0092)
    cmake_policy(SET CMP0092 NEW)
endif()

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
    set(CMAKE_RC_FLAGS "${CMAKE_RC_FLAGS} /nologo")
endif()

# clang and gcc don't default-print colored diagnostics when invoked from Ninja
if("${CMAKE_GENERATOR}" STREQUAL "Ninja" AND
("${CMAKE_CXX_COMPILER_ID}" MATCHES "(Apple)?[Cc]lang" OR
("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" AND
        NOT (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.9))))
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color")
    if("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fansi-escape-codes")
    endif()
endif()

if(MSVC)
    foreach (flag_var CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
        string(REPLACE "/W3" "" ${flag_var} "${${flag_var}}")
        string(REPLACE "/EHc" "" ${flag_var} "${${flag_var}}")
        string(REPLACE "/EHsc" "" ${flag_var} "${${flag_var}}")
        string(REPLACE "/GR" "" ${flag_var} "${${flag_var}}")
    endforeach()

    if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(Apple)?[Cc]lang")
        set(CMAKE_INCLUDE_SYSTEM_FLAG_CXX "-imsvc ")
    else()
        set(CMAKE_INCLUDE_SYSTEM_FLAG_CXX "/external:I ")
    endif()
endif()

function(target_add_compiler_flags target)
    target_include_directories(${target} SYSTEM PRIVATE include)

    # Disable exceptions
    if(MSVC)
        target_compile_definitions(${target} PRIVATE _HAS_EXCEPTIONS=0)
        target_compile_options(${target} PRIVATE /EHa- /EHs-)
    else()
        target_compile_options(${target} PRIVATE -fno-exceptions)
    endif()

    # Disable RTTI
    if(MSVC)
        target_compile_options(${target} PRIVATE /GR-)
    else()
        target_compile_options(${target} PRIVATE -fno-rtti)
    endif()

    # Sanitize MSVC
    if(MSVC)
        target_compile_options(${target} PRIVATE /utf-8)

        target_compile_definitions(${target} PRIVATE NOGDI)
        target_compile_definitions(${target} PRIVATE NOMINMAX)
        target_compile_definitions(${target} PRIVATE VC_EXTRALEAN)
        target_compile_definitions(${target} PRIVATE WIN32_LEAN_AND_MEAN)

        if(NOT "${CMAKE_CXX_COMPILER_ID}" MATCHES "(Apple)?[Cc]lang")
            target_compile_options(${target} PRIVATE /experimental:external /external:W0 /permissive-)
        endif()
    endif()

    if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
        # gcc 5
        target_compile_options(${target} PRIVATE
                -Wall
                -Wcast-qual
                -Wconversion
                -Wctor-dtor-privacy
                -Wdeprecated-declarations
                -Wdisabled-optimization
                -Wdouble-promotion
                -Wextra
                -Wformat=2
                -Wlogical-op
                -Wmissing-include-dirs
                -Wnoexcept
                -Wnon-virtual-dtor
                -Wold-style-cast
                -Woverloaded-virtual
                -Wpedantic
                -Wpointer-arith
                -Wredundant-decls
                -Wshadow
                -Wsign-conversion
                -Wsized-deallocation
                -Wtrampolines
                -Wundef
                -Wunused
                -Wunused-parameter
                -Wuseless-cast
                -Wvector-operation-performance
                -Wwrite-strings
                -pedantic-errors
                )

        # gcc 6
        if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 6.1)
            target_compile_options(${target} PRIVATE
                    -Wduplicated-cond
                    -Wmisleading-indentation
                    -Wnull-dereference
                    -Wshift-overflow=2
                    )
        endif()

        # gcc 7
        if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 7.1)
            target_compile_options(${target} PRIVATE
                    -Wduplicated-branches
                    )
        endif()

        # gcc 9
        if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 9.1)
            target_compile_options(${target} PRIVATE
                    -Wzero-as-null-pointer-constant
                    )
        endif()

    elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "(Apple)?[Cc]lang")
        target_compile_options(${target} PRIVATE
                -Weverything
                -Wno-c++98-compat
                -Wno-c++98-compat-pedantic
                -Wno-padded
                -Wno-return-std-move-in-c++11
                )
    else()
        target_compile_options(${target} PRIVATE
                /W4
                /w14242
                /w14254
                /w14263
                /w14265
                /w14287
                /we4289
                /w14296
                /w14311
                /w14545
                /w14546
                /w14547
                /w14549
                /w14555
                /w14619
                /w14640
                /w14826
                /w14905
                /w14906
                /w14928
                )
    endif()
endfunction()

if(APPLE)
    execute_process(COMMAND brew --prefix qt OUTPUT_VARIABLE QT_PREFIX_PATH)
    string(REGEX REPLACE "\n$" "" CMAKE_PREFIX_PATH "${QT_PREFIX_PATH}")
endif()

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(SOURCES
    src/qlift-c-api/compiler.cpp
    src/qlift-c-api/qlift-QAbstractButton.cpp
    src/qlift-c-api/qlift-QAbstractSpinBox.cpp
    src/qlift-c-api/qlift-QAction.cpp
    src/qlift-c-api/qlift-QApplication.cpp
    src/qlift-c-api/qlift-QBoxLayout.cpp
    src/qlift-c-api/qlift-QCloseEvent.cpp
    src/qlift-c-api/qlift-QComboBox.cpp
    src/qlift-c-api/qlift-QCoreApplication.cpp
    src/qlift-c-api/qlift-QDesktopWidget.cpp
    src/qlift-c-api/qlift-QDialog.cpp
    src/qlift-c-api/qlift-QDialogButtonBox.cpp
    src/qlift-c-api/qlift-QEvent.cpp
    src/qlift-c-api/qlift-QFrame.cpp
    src/qlift-c-api/qlift-QGridLayout.cpp
    src/qlift-c-api/qlift-QGroupBox.cpp
    src/qlift-c-api/qlift-QGuiApplication.cpp
    src/qlift-c-api/qlift-QHBoxLayout.cpp
    src/qlift-c-api/qlift-QInputEvent.cpp
    src/qlift-c-api/qlift-QLabel.cpp
    src/qlift-c-api/qlift-QLayout.cpp
    src/qlift-c-api/qlift-QLayoutItem.cpp
    src/qlift-c-api/qlift-QMainWindow.cpp
    src/qlift-c-api/qlift-QMargins.cpp
    src/qlift-c-api/qlift-QMenu.cpp
    src/qlift-c-api/qlift-QMenuBar.cpp
    src/qlift-c-api/qlift-QMessageBox.cpp
    src/qlift-c-api/qlift-QMouseEvent.cpp
    src/qlift-c-api/qlift-QObject.cpp
    src/qlift-c-api/qlift-QPoint.cpp
    src/qlift-c-api/qlift-QPushButton.cpp
    src/qlift-c-api/qlift-QRect.cpp
    src/qlift-c-api/qlift-QSize.cpp
    src/qlift-c-api/qlift-QSizePolicy.cpp
    src/qlift-c-api/qlift-QSpacerItem.cpp
    src/qlift-c-api/qlift-QSpinBox.cpp
    src/qlift-c-api/qlift-QTimer.cpp
    src/qlift-c-api/qlift-QVBoxLayout.cpp
    src/qlift-c-api/qlift-QWidget.cpp
    src/qlift-c-api.cpp
)

configure_file("qlift-c-api.pc.in" "qlift-c-api.pc" @ONLY)

option(ENABLE_SHARED "Enable building the shared library" ON)
option(ENABLE_STATIC "Enable building the static library" OFF)

if(ENABLE_SHARED)
    add_library(qlift-c-api SHARED ${SOURCES})
    set_target_properties(qlift-c-api PROPERTIES OUTPUT_NAME qlift-c-api)
    target_link_libraries(qlift-c-api Qt5::Core Qt5::Widgets)
    install(TARGETS qlift-c-api
        DESTINATION "${CMAKE_INSTALL_PREFIX}/lib"
    )
    target_add_compiler_flags(qlift-c-api)
endif()

if(ENABLE_STATIC)
    add_library(qlift-c-api-static STATIC ${SOURCES})
    set_target_properties(qlift-c-api-static PROPERTIES OUTPUT_NAME qlift-c-api)
    target_link_libraries(qlift-c-api-static Qt5::Core Qt5::Widgets)
    install(TARGETS qlift-c-api-static
        DESTINATION "${CMAKE_INSTALL_PREFIX}/lib"
    )
    target_add_compiler_flags(qlift-c-api-static)
endif()

if(NOT ENABLE_SHARED AND NOT ENABLE_STATIC)
    message(FATAL_ERROR "No targets specified.")
endif()

install(FILES src/qlift-c-api.h
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include")

install(DIRECTORY src/qlift-c-api/
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qlift-c-api"
    FILES_MATCHING PATTERN "*.h*")

install(FILES ${CMAKE_BINARY_DIR}/qlift-c-api.pc
    DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig")

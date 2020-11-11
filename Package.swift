// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "CQlift",
    products: [
        .library(
            name: "CQlift",
            type: .static,
            targets: [
                "CQlift"
            ]
        )
    ],
    targets: [
        .target(
            name: "CQlift",
            dependencies: [
                .target(
                    name: "CQt5Widgets",
                    condition: .when(platforms: [.linux])
                )
            ],
            path: "src/qlift-c-api",
            publicHeadersPath: ".",
            cxxSettings: [
                .unsafeFlags([
                        "-I/usr/local/opt/qt/lib/QtCore.framework/Headers",
                        "-I/usr/local/opt/qt/lib/QtGui.framework/Headers",
                        "-I/usr/local/opt/qt/lib/QtWidgets.framework/Headers",
                        "-I/usr/local/opt/qt/include"
                    ],
                    .when(platforms: [.macOS])
                )
            ],
            linkerSettings: [
                .unsafeFlags([
                        "/usr/local/opt/qt/lib/QtCore.framework/QtCore",
                        "/usr/local/opt/qt/lib/QtGui.framework/QtGui",
                        "/usr/local/opt/qt/lib/QtWidgets.framework/QtWidgets",
                    ],
                    .when(platforms: [.macOS])
                )
            ]
        ),
        .systemLibrary(
            name: "CQt5Widgets",
            pkgConfig: "Qt5Widgets"
        )
    ],
    cxxLanguageStandard: .cxx1z
)

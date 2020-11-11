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
            publicHeadersPath: "."
        ),
        .systemLibrary(
            name: "CQt5Widgets",
            pkgConfig: "Qt5Widgets"
        )
    ],
    cxxLanguageStandard: .cxx1z
)

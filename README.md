# qlift-c-api
C API to Qt for [Qlift](https://github.com/Longhanks/Qlift "Qlift")

## Building

`qlift-c-api` can be built using either the Swift Package Manager or CMake.

Qt must be installed, of coures. On Linux, `pkgconfig` is used to find the build flags. On macOS, the installation is expected to be at `/usr/local/opt/qt/`, which is also where Homebrew would install Qt per default.

### swiftpm

`swift build`

swiftpm always produces a static library.

### cmake

`mkdir build && cd build && cmake .. && make`

Options:

- `ENABLE_SHARED`: Enable or disable building qlift-c-api as a shared library. Default is ON.
- `ENABLE_STATIC`: Enable or disable building qlift-c-api as a static library. Default is OFF.

## License

### This Project

MIT

### Verdigris

LGPLv3

# qlift-c-api
C API to Qt for Qlift

[![Build Status](https://travis-ci.org/Longhanks/qlift-c-api.svg?branch=master)](https://travis-ci.org/Longhanks/qlift-c-api)

### Build options

- `CMAKE_INSTALL_PREFIX`: Where to install the library, modulemap and headers.
- `ENABLE_SHARED`: Enable or disable building qlift-c-api as a shared library. Default is ON.
- `ENABLE_STATIC`: Enable or disable building qlift-c-api as a static library. Default is OFF.

To install as a shared library in ```/usr/local``` (default install directory):
```sh
git clone https://github.com/Longhanks/qlift-c-api
cd qlift-c-api
mkdir build
cd build
cmake ..
make
sudo make install # root access may not be nessasary if you have /usr/local set up right
```

### License

#### This Project

MIT

#### Verdigris

LGPLv3


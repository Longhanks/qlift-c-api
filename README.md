# qlift-c-api
C API to Qt for [Qlift](https://github.com/Longhanks/Qlift "Qlift")

### Build options

#### Swift

##### Linux

`swift build`

##### Mac

```sh
swift build \
    -Xcc -I$(brew --prefix qt)/lib/QtCore.framework/Headers \
    -Xcc -I$(brew --prefix qt)/lib/QtGui.framework/Headers \
    -Xcc -I$(brew --prefix qt)/lib/QtWidgets.framework/Headers \
    -Xcc -I$(brew --prefix qt)/include \
    -Xlinker $(brew --prefix qt)/lib/QtCore.framework/QtCore \
    -Xlinker $(brew --prefix qt)/lib/QtGui.framework/QtGui \
    -Xlinker $(brew --prefix qt)/lib/QtWidgets.framework/QtWidgets
```

#### C++

- `CMAKE_INSTALL_PREFIX`: Where to install the library, modulemap and headers.
- `ENABLE_SHARED`: Enable or disable building qlift-c-api as a shared library. Default is ON.
- `ENABLE_STATIC`: Enable or disable building qlift-c-api as a static library. Default is OFF.

The default installation directory on UNIX systems is `/usr/local`. To for example install to `/usr` run:

```sh
git clone https://github.com/Longhanks/qlift-c-api
cd qlift-c-api
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
make
sudo make install
```

### License

#### This Project

MIT

#### Verdigris

LGPLv3

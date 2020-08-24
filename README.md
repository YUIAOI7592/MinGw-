# MinGwChieseWchar_test
## 測試中文顯示

多方嘗試後：
    #include <fcntl.h>
    #include <io.h>
      int main()
      {
       _setmode(_fileno(stdout), _O_U16TEXT);
       ...
       ...
       ...
      }
## g++ -v
Using built-in specs.
COLLECT_GCC=C:\msys64\mingw64\bin\g++.exe
COLLECT_LTO_WRAPPER=C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/10.2.0/lto-wrapper.exe
Target: x86_64-w64-mingw32
Configured with: ../gcc-10.2.0/configure --prefix=/mingw64 --with-local-prefix=/mingw64/local --build=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --target=x86_64-w64-mingw32 --with-native-system-header-dir=/mingw64/x86_64-w64-mingw32/include --libexecdir=/mingw64/lib --enable-bootstrap --with-arch=x86-64 --with-tune=generic --enable-languages=c,lto,c++,fortran,ada,objc,obj-c++ --enable-shared --enable-static --enable-libatomic --enable-threads=posix --enable-graphite --enable-fully-dynamic-string --enable-libstdcxx-filesystem-ts=yes --enable-libstdcxx-time=yes --disable-libstdcxx-pch --disable-libstdcxx-debug --disable-isl-version-check --enable-lto --enable-libgomp --disable-multilib --enable-checking=release --disable-rpath --disable-win32-registry --disable-nls --disable-werror --disable-symvers --disable-plugin --with-libiconv --with-system-zlib --with-gmp=/mingw64 --with-mpfr=/mingw64 --with-mpc=/mingw64 --with-isl=/mingw64 --with-pkgversion='Rev1, Built by MSYS2 project' --with-bugurl=https://github.com/msys2/MINGW-packages/issues --with-gnu-as --with-gnu-ld
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 10.2.0 (Rev1, Built by MSYS2 project)

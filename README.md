# List of formulas and their versions

- aom - 3.5.0_1
- apr - 1.7.2
- apr-util - 1.6.3
- argon2 - 20190702_1
- aspell - 0.60.8
- autoconf - 2.71
- automake - 1.16.5
- bison - 3.8.2
- brotli - 1.0.9
- ca-certificates - 2023-01-10
- cmake - 3.25.2
- curl - 7.87.0
- docutils - 0.19_1
- doxygen - 1.9.6
- flex - 2.6.4_2
- fontconfig - 2.14.1
- freetds - 1.3.17
- freetype - 2.12.1
- gd - 2.3.3_4
- gettext - 0.21.1
- giflib - 5.2.1
- gmp - 6.2.1_1
- highway - 1.0.3
- httpd - 2.4.55
- icu4c - 72.1
- imath - 3.1.6
- jpeg - 9e
- jpeg-turbo - 2.1.5.1 - 2.1.4
- jpeg-xl - 0.7.0_1
- krb5 - 1.20.1
- libavif - 0.11.1
- libffi - 3.4.4
- libidn2 - 2.3.4_1
- libnghttp2 - 1.52.0
- libpng - 1.6.39
- libpq - 15.2
- libsodium - 1.0.18_1
- libssh2 - 1.10.0
- libtiff - 4.4.0_1
- libtool - 2.4.7
- libunistring - 1.1
- libvmaf - 2.3.1
- libzip - 1.9.2
- little-cms2 - 2.14
- lz4 - 1.9.4
- m4 - 1.4.19
- meson - 1.0.0
- mpdecimal - 2.5.1
- nasm - 2.16.01
- ninja - 1.11.1
- oniguruma - 6.9.8
- openexr - 3.1.5
- openldap - 2.6.4
- openssl@1.1 - 1.1.1t
- pcre2 - 10.42
- php - 8.2.2
- pkg-config - 0.29.2_3
- pygments - 2.14.0
- python@3.11 - 3.11.2
- readline - 8.2.1
- rtmpdump - 2.4+20151223_1
- sphinx-doc - 6.1.3
- sqlite - 3.40.1
- tidy-html5 - 5.8.0
- unixodbc - 2.3.11
- webp - 1.3.0
- xz - 5.4.1
- yasm - 1.3.0_2
- zstd - 1.5.4

---

So the reason why I created this repo is in case the Homebrew team updates any of the formulas above and breaks the files for older macOS versions. Any of these files and folders may not really be needed for your use case so be aware of that.

To get these files working on your macOS, you'll have to do a couple of things.

1. Copy down the files including the proper Ruby files into the appropriate folders.
2. Create the symbolic links for those files.
3. Create Homebrew links for those files.
4. Create a symbolic link for aom's include folder.

I should mention where you should be placing these files and folders. For anything in the Cellar folder within this repo, that goes in `/usr/local/Cellar`. Anything within the Formula folder within this repo goes in `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-core/Formula`.

So to do that, I'll use `jpeg-xl` as an example. What I would do is download the `jpeg-xl` folder from the Cellar folder and paste it into your Cellar folder. That should be located at `/usr/local/Cellar`. Once I have copied over `jpeg-xl` into my Cellar folder, I'll then create the symbolic link for `jpeg-xl` by doing `sudo ln -s /usr/local/Cellar/jpeg-xl /usr/local/opt`. That should create the symbolic link for `jpeg-xl`. I'll do a `brew link jpeg-xl` to create the Homebrew link. I would then do `sudo ln -s /usr/local/Cellar/aom/3.5.0_1/include/aom /usr/local/include/aom` to create that symbolic link for aom's include folder. Lastly I'll download and copy over the `jpeg-xl.rb` file from the Formula folder within this repo and paste it into `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-core/Formula`.

If all goes well, you should be able to get your files back in order. I would suggest refraining from upgrading your formulas until the Homebrew team fixes the issues. If all fails, you still have this repo to reference or download the old files for.

# NOTE
Remember, these are files from my macOS computer. These are fully working as of PHP 8.2.2 which was the whole reason why I created this repo in the first place. I had upgraded all of the formulas that had updates and while they were upgrading, they broke for some reason. I'm not entirely sure if it's because of what the Homebrew team changed in those files or if it has anything to do with using older macOS versions. Nonetheless, I highly recommend not upgrading these files once you have your files working.

This was the error I kept seeing when trying to install/upgrade PHP's dependencies.

```
==> ./configure --prefix=/usr/local/Cellar/freetype/2.13.0 --enable-freetype-config --without-harfbuzz
==> make
Last 15 lines from /Users/{REDACTED}/Library/Logs/Homebrew/freetype/02.make:
libtool: compile:  clang -pedantic -std=c99 -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/pcf -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs -I./builds/unix -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include -c -Wall -g -O2 -fvisibility=hidden -DDARWIN_NO_CARBON -I/usr/local/Cellar/libpng/1.6.39/include/libpng16 -pthread "-DFT_CONFIG_CONFIG_H=<ftconfig.h>" "-DFT_CONFIG_MODULES_H=<ftmodule.h>" "-DFT_CONFIG_OPTIONS_H=<ftoption.h>" -DFT2_BUILD_LIBRARY /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/pcf/pcf.c  -fno-common -DPIC -o /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/.libs/pcf.o
libtool: compile:  clang -pedantic -std=c99 -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/bdf -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs -I./builds/unix -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include -c -Wall -g -O2 -fvisibility=hidden -DDARWIN_NO_CARBON -I/usr/local/Cellar/libpng/1.6.39/include/libpng16 -pthread "-DFT_CONFIG_CONFIG_H=<ftconfig.h>" "-DFT_CONFIG_MODULES_H=<ftmodule.h>" "-DFT_CONFIG_OPTIONS_H=<ftoption.h>" -DFT2_BUILD_LIBRARY /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/bdf/bdf.c  -fno-common -DPIC -o /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/.libs/bdf.o
libtool: compile:  clang -pedantic -std=c99 -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/sfnt -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs -I./builds/unix -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include -c -Wall -g -O2 -fvisibility=hidden -DDARWIN_NO_CARBON -I/usr/local/Cellar/libpng/1.6.39/include/libpng16 -pthread "-DFT_CONFIG_CONFIG_H=<ftconfig.h>" "-DFT_CONFIG_MODULES_H=<ftmodule.h>" "-DFT_CONFIG_OPTIONS_H=<ftoption.h>" -DFT2_BUILD_LIBRARY /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/sfnt/sfnt.c  -fno-common -DPIC -o /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/.libs/sfnt.o
In file included from /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/sfnt/sfnt.c:21:
/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/sfnt/pngshim.c:411:7: error: expected expression
      FALL_THROUGH;
      ^
/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include/freetype/internal/compiler-macros.h:46:27: note: expanded from macro 'FALL_THROUGH'
#    define FALL_THROUGH  __attribute__(( __fallthrough__ ))
                          ^
1 error generated.
make: *** [/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/sfnt.lo] Error 1
make: *** Waiting for unfinished jobs....
libtool: compile:  clang -pedantic -std=c99 -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/pcf -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs -I./builds/unix -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include -c -Wall -g -O2 -fvisibility=hidden -DDARWIN_NO_CARBON -I/usr/local/Cellar/libpng/1.6.39/include/libpng16 -pthread "-DFT_CONFIG_CONFIG_H=<ftconfig.h>" "-DFT_CONFIG_MODULES_H=<ftmodule.h>" "-DFT_CONFIG_OPTIONS_H=<ftoption.h>" -DFT2_BUILD_LIBRARY /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/pcf/pcf.c -o /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/pcf.o >/dev/null 2>&1
libtool: compile:  clang -pedantic -std=c99 -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/bdf -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs -I./builds/unix -I/private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/include -c -Wall -g -O2 -fvisibility=hidden -DDARWIN_NO_CARBON -I/usr/local/Cellar/libpng/1.6.39/include/libpng16 -pthread "-DFT_CONFIG_CONFIG_H=<ftconfig.h>" "-DFT_CONFIG_MODULES_H=<ftmodule.h>" "-DFT_CONFIG_OPTIONS_H=<ftoption.h>" -DFT2_BUILD_LIBRARY /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/src/bdf/bdf.c -o /private/tmp/freetype-20230215-4853-17tv6ao/freetype-2.13.0/objs/bdf.o >/dev/null 2>&1

Do not report this issue to Homebrew/brew or Homebrew/core!
```

Here is a list of effected dependencies with the same error as above.

- freetype
- fontconfig
- jpeg-xl
- aom
- libavif
- gd

---

If you get any weird errors, please don't hesitate to create an [issue](https://github.com/spaceshiptrooper/homebrew/issues).
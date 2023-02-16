/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--prefix=/usr/local/Cellar/php/8.2.2' '--localstatedir=/usr/local/var' '--sysconfdir=/usr/local/etc/php/8.2' '--with-config-file-path=/usr/local/etc/php/8.2' '--with-config-file-scan-dir=/usr/local/etc/php/8.2/conf.d' '--with-pear=/usr/local/Cellar/php/8.2.2/share/php/pear' '--enable-bcmath' '--enable-calendar' '--enable-dba' '--enable-exif' '--enable-ftp' '--enable-fpm' '--enable-gd' '--enable-intl' '--enable-mbregex' '--enable-mbstring' '--enable-mysqlnd' '--enable-pcntl' '--enable-phpdbg' '--enable-phpdbg-readline' '--enable-shmop' '--enable-soap' '--enable-sockets' '--enable-sysvmsg' '--enable-sysvsem' '--enable-sysvshm' '--with-apxs2=/usr/local/opt/httpd/bin/apxs' '--with-bz2=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr' '--with-curl' '--with-external-gd' '--with-external-pcre' '--with-ffi' '--with-fpm-user=_www' '--with-fpm-group=_www' '--with-gettext=/usr/local/opt/gettext' '--with-gmp=/usr/local/opt/gmp' '--with-iconv=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr' '--with-kerberos' '--with-layout=GNU' '--with-ldap=/usr/local/opt/openldap' '--with-libxml' '--with-libedit' '--with-mhash=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr' '--with-mysql-sock=/tmp/mysql.sock' '--with-mysqli=mysqlnd' '--with-ndbm=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr' '--with-openssl' '--with-password-argon2=/usr/local/opt/argon2' '--with-pdo-dblib=/usr/local/opt/freetds' '--with-pdo-mysql=mysqlnd' '--with-pdo-odbc=unixODBC,/usr/local/opt/unixodbc' '--with-pdo-pgsql=/usr/local/opt/libpq' '--with-pdo-sqlite' '--with-pgsql=/usr/local/opt/libpq' '--with-pic' '--with-pspell=/usr/local/opt/aspell' '--with-sodium' '--with-sqlite3' '--with-tidy=/usr/local/opt/tidy-html5' '--with-unixODBC' '--with-xsl' '--with-zip' '--with-zlib' '--enable-dtrace' '--with-ldap-sasl' '--with-os-sdkpath=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk' 'PKG_CONFIG_PATH=/usr/local/opt/apr/lib/pkgconfig:/usr/local/opt/openssl@1.1/lib/pkgconfig:/usr/local/opt/apr-util/lib/pkgconfig:/usr/local/opt/argon2/lib/pkgconfig:/usr/local/opt/brotli/lib/pkgconfig:/usr/local/opt/libidn2/lib/pkgconfig:/usr/local/opt/libnghttp2/lib/pkgconfig:/usr/local/opt/libssh2/lib/pkgconfig:/usr/local/opt/openldap/lib/pkgconfig:/usr/local/opt/rtmpdump/lib/pkgconfig:/usr/local/opt/lz4/lib/pkgconfig:/usr/local/opt/xz/lib/pkgconfig:/usr/local/opt/zstd/lib/pkgconfig:/usr/local/opt/curl/lib/pkgconfig:/usr/local/opt/unixodbc/lib/pkgconfig:/usr/local/opt/libpng/lib/pkgconfig:/usr/local/opt/freetype/lib/pkgconfig:/usr/local/opt/fontconfig/lib/pkgconfig:/usr/local/opt/jpeg-turbo/lib/pkgconfig:/usr/local/opt/highway/lib/pkgconfig:/usr/local/opt/imath/lib/pkgconfig:/usr/local/opt/openexr/lib/pkgconfig:/usr/local/opt/libtiff/lib/pkgconfig:/usr/local/opt/webp/lib/pkgconfig:/usr/local/opt/jpeg-xl/lib/pkgconfig:/usr/local/opt/libvmaf/lib/pkgconfig:/usr/local/opt/aom/lib/pkgconfig:/usr/local/opt/libavif/lib/pkgconfig:/usr/local/opt/gd/lib/pkgconfig:/usr/local/opt/gmp/lib/pkgconfig:/usr/local/opt/icu4c/lib/pkgconfig:/usr/local/opt/krb5/lib/pkgconfig:/usr/local/opt/libpq/lib/pkgconfig:/usr/local/opt/libsodium/lib/pkgconfig:/usr/local/opt/libzip/lib/pkgconfig:/usr/local/opt/oniguruma/lib/pkgconfig:/usr/local/opt/pcre2/lib/pkgconfig:/usr/local/opt/readline/lib/pkgconfig:/usr/local/opt/sqlite/lib/pkgconfig:/usr/local/opt/tidy-html5/lib/pkgconfig:/usr/local/opt/libffi/lib/pkgconfig' 'PKG_CONFIG_LIBDIR=/usr/lib/pkgconfig:/usr/local/Homebrew/Library/Homebrew/os/mac/pkgconfig/10.14' 'KERBEROS_CFLAGS= ' 'SASL_CFLAGS=-I/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/sasl' 'SASL_LIBS=-lsasl2'"
#define PHP_ODBC_CFLAGS	"-I/usr/local/Cellar/unixodbc/2.3.11/include"
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		"-L/usr/local/Cellar/unixodbc/2.3.11/lib -lodbc"
#define PHP_ODBC_TYPE		"unixODBC"
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         "/usr/local/Cellar/php/8.2.2/share/php/pear"
#define PHP_INCLUDE_PATH	".:/usr/local/Cellar/php/8.2.2/share/php/pear"
#define PHP_EXTENSION_DIR       "/usr/local/Cellar/php/8.2.2/lib/php/20220829"
#define PHP_PREFIX              "/usr/local/Cellar/php/8.2.2"
#define PHP_BINDIR              "/usr/local/Cellar/php/8.2.2/bin"
#define PHP_SBINDIR             "/usr/local/Cellar/php/8.2.2/sbin"
#define PHP_MANDIR              "/usr/local/Cellar/php/8.2.2/share/man"
#define PHP_LIBDIR              "/usr/local/Cellar/php/8.2.2/lib/php"
#define PHP_DATADIR             "/usr/local/Cellar/php/8.2.2/share/php"
#define PHP_SYSCONFDIR          "/usr/local/etc/php/8.2"
#define PHP_LOCALSTATEDIR       "/usr/local/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/etc/php/8.2"
#define PHP_CONFIG_FILE_SCAN_DIR    "/usr/local/etc/php/8.2/conf.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""

/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file  ap_config_layout.h
 * @brief Apache Config Layout
 */

#ifndef AP_CONFIG_LAYOUT_H
#define AP_CONFIG_LAYOUT_H

/* Configured Apache directory layout */
#define DEFAULT_PREFIX "/usr/local/opt/httpd"
#define DEFAULT_EXP_EXEC_PREFIX "/usr/local/opt/httpd"
#define DEFAULT_REL_EXEC_PREFIX ""
#define DEFAULT_EXP_BINDIR "/usr/local/opt/httpd/bin"
#define DEFAULT_REL_BINDIR "bin"
#define DEFAULT_EXP_SBINDIR "/usr/local/opt/httpd/bin"
#define DEFAULT_REL_SBINDIR "bin"
#define DEFAULT_EXP_LIBEXECDIR "/usr/local/lib/httpd/modules"
#define DEFAULT_REL_LIBEXECDIR "lib/httpd/modules"
#define DEFAULT_EXP_MANDIR "/usr/local/opt/httpd/share/man"
#define DEFAULT_REL_MANDIR "share/man"
#define DEFAULT_EXP_SYSCONFDIR "/usr/local/etc/httpd"
#define DEFAULT_REL_SYSCONFDIR "/usr/local/etc/httpd"
#define DEFAULT_EXP_DATADIR "/usr/local/var/www"
#define DEFAULT_REL_DATADIR "/usr/local/var/www"
#define DEFAULT_EXP_INSTALLBUILDDIR "/usr/local/opt/httpd/lib/httpd/build"
#define DEFAULT_REL_INSTALLBUILDDIR "lib/httpd/build"
#define DEFAULT_EXP_ERRORDIR "/usr/local/opt/httpd/share/httpd/error"
#define DEFAULT_REL_ERRORDIR "share/httpd/error"
#define DEFAULT_EXP_ICONSDIR "/usr/local/opt/httpd/share/httpd/icons"
#define DEFAULT_REL_ICONSDIR "share/httpd/icons"
#define DEFAULT_EXP_HTDOCSDIR "/usr/local/var/www"
#define DEFAULT_REL_HTDOCSDIR "/usr/local/var/www"
#define DEFAULT_EXP_MANUALDIR "/usr/local/opt/httpd/share/httpd/manual"
#define DEFAULT_REL_MANUALDIR "share/httpd/manual"
#define DEFAULT_EXP_CGIDIR "/usr/local/var/www/cgi-bin"
#define DEFAULT_REL_CGIDIR "/usr/local/var/www/cgi-bin"
#define DEFAULT_EXP_INCLUDEDIR "/usr/local/opt/httpd/include/httpd"
#define DEFAULT_REL_INCLUDEDIR "include/httpd"
#define DEFAULT_EXP_LOCALSTATEDIR "/usr/local/var"
#define DEFAULT_REL_LOCALSTATEDIR "/usr/local/var"
#define DEFAULT_EXP_RUNTIMEDIR "/usr/local/var/run/httpd"
#define DEFAULT_REL_RUNTIMEDIR "/usr/local/var/run/httpd"
#define DEFAULT_EXP_LOGFILEDIR "/usr/local/var/log/httpd"
#define DEFAULT_REL_LOGFILEDIR "/usr/local/var/log/httpd"
#define DEFAULT_EXP_PROXYCACHEDIR "/usr/local/var/cache/httpd"
#define DEFAULT_REL_PROXYCACHEDIR "/usr/local/var/cache/httpd"

#endif /* AP_CONFIG_LAYOUT_H */

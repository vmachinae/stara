########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: xttpd.pri
#
# Author: $author$
#   Date: 11/12/2021
#
# QtCreator .pri file for stara executable xttpd
########################################################################

########################################################################
# xttpd

# xttpd TARGET
#
xttpd_TARGET = xttpd

# xttpd INCLUDEPATH
#
xttpd_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# xttpd DEFINES
#
xttpd_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# xttpd OBJECTIVE_HEADERS
#
#xttpd_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/xttpd/main.hh \

# xttpd OBJECTIVE_SOURCES
#
#xttpd_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/xttpd/main.mm \

########################################################################
# xttpd HEADERS
#
xttpd_HEADERS += \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main.hpp \

# xttpd SOURCES
#
xttpd_SOURCES += \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main.cpp \

########################################################################
# xttpd FRAMEWORKS
#
xttpd_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# xttpd LIBS
#
xttpd_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core



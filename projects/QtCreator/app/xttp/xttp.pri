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
#   File: xttp.pri
#
# Author: $author$
#   Date: 11/12/2021
#
# QtCreator .pri file for stara executable xttp
########################################################################

########################################################################
# xttp

# xttp TARGET
#
xttp_TARGET = xttp

# xttp INCLUDEPATH
#
xttp_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# xttp DEFINES
#
xttp_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# xttp OBJECTIVE_HEADERS
#
#xttp_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/xttp/main.hh \

# xttp OBJECTIVE_SOURCES
#
#xttp_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/xttp/main.mm \

########################################################################
# xttp HEADERS
#
xttp_HEADERS += \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.hpp \

# xttp SOURCES
#
xttp_SOURCES += \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.cpp \

########################################################################
# xttp FRAMEWORKS
#
xttp_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# xttp LIBS
#
xttp_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core



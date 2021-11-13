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
#   File: cgienv.pri
#
# Author: $author$
#   Date: 11/13/2021
#
# QtCreator .pri file for stara executable cgienv
########################################################################

########################################################################
# cgienv

# cgienv TARGET
#
cgienv_TARGET = cgienv

# cgienv INCLUDEPATH
#
cgienv_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# cgienv DEFINES
#
cgienv_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# cgienv OBJECTIVE_HEADERS
#
#cgienv_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/cgienv/main.hh \

# cgienv OBJECTIVE_SOURCES
#
#cgienv_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/cgienv/main.mm \

########################################################################
# cgienv HEADERS
#
cgienv_HEADERS += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/environment/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/environment/main.hpp \

# cgienv SOURCES
#
cgienv_SOURCES += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/environment/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/environment/main.cpp \

########################################################################
# cgienv FRAMEWORKS
#
cgienv_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# cgienv LIBS
#
cgienv_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core



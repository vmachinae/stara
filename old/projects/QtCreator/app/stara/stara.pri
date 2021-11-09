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
#   File: stara.pri
#
# Author: $author$
#   Date: 9/21/2021
#
# QtCreator .pri file for stara executable stara
########################################################################

########################################################################
# stara

# stara_exe TARGET
#
stara_exe_TARGET = stara

# stara_exe INCLUDEPATH
#
stara_exe_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# stara_exe DEFINES
#
stara_exe_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_STARA_VERSION_MAIN_INSTANCE \

########################################################################
# stara_exe OBJECTIVE_HEADERS
#
#stara_exe_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/vos/app/console/main.hh \

# stara_exe OBJECTIVE_SOURCES
#
#stara_exe_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/vos/app/console/main.mm \

########################################################################
# stara_exe HEADERS
#
stara_exe_HEADERS += \
$${STARA_SRC}/vos/protocol/xttp/protocol/name.hpp \
$${STARA_SRC}/vos/protocol/xttp/protocol/version.hpp \
$${STARA_SRC}/vos/protocol/xttp/protocol/identifier.hpp \
\
$${STARA_SRC}/vos/protocol/xttp/message/part.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/line.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/field.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/fields.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/content/type.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/content/length.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/parts.hpp \
$${STARA_SRC}/vos/protocol/xttp/message/body/content.hpp \
\
$${STARA_SRC}/vos/protocol/xttp/request/method.hpp \
$${STARA_SRC}/vos/protocol/xttp/request/line.hpp \
$${STARA_SRC}/vos/protocol/xttp/request/message.hpp \
\
$${STARA_SRC}/vos/protocol/xttp/response/status.hpp \
$${STARA_SRC}/vos/protocol/xttp/response/reason.hpp \
$${STARA_SRC}/vos/protocol/xttp/response/line.hpp \
$${STARA_SRC}/vos/protocol/xttp/response/message.hpp \
\
$${STARA_SRC}/vos/app/console/protocol/xttp/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/main.hpp \
\
$${STARA_SRC}/vos/app/console/stara/main_opt.hpp \
$${STARA_SRC}/vos/app/console/stara/main.hpp \
\
$${STARA_SRC}/vos/app/console/stara/version/main_opt.hpp \
$${STARA_SRC}/vos/app/console/stara/version/main.hpp \
\
$${NADIR_SRC}/vos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/vos/app/console/version/main.hpp \
$${NADIR_SRC}/vos/console/main_main.hpp \

# stara_exe SOURCES
#
stara_exe_SOURCES += \
$${STARA_SRC}/vos/protocol/xttp/protocol/name.cpp \
$${STARA_SRC}/vos/protocol/xttp/protocol/version.cpp \
$${STARA_SRC}/vos/protocol/xttp/protocol/identifier.cpp \
\
$${STARA_SRC}/vos/protocol/xttp/message/part.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/field.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/fields.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/content/type.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/header/content/length.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/parts.cpp \
$${STARA_SRC}/vos/protocol/xttp/message/body/content.cpp \
\
$${STARA_SRC}/vos/protocol/xttp/request/method.cpp \
$${STARA_SRC}/vos/protocol/xttp/response/message.cpp \
$${STARA_SRC}/vos/protocol/xttp/response/status.cpp \
$${STARA_SRC}/vos/protocol/xttp/response/reason.cpp \
$${STARA_SRC}/vos/protocol/xttp/response/line.cpp \
\
$${STARA_SRC}/vos/app/console/stara/version/main_opt.cpp \
$${STARA_SRC}/vos/app/console/stara/version/main.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \

########################################################################
# stara_exe FRAMEWORKS
#
stara_exe_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# stara_exe LIBS
#
stara_exe_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
#QT -= gui core



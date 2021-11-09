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
#   File: httpc.pri
#
# Author: $author$
#   Date: 9/23/2021
#
# QtCreator .pri file for stara executable httpc
########################################################################

########################################################################
# httpc

# httpc TARGET
#
httpc_TARGET = httpc

# httpc INCLUDEPATH
#
httpc_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# httpc DEFINES
#
httpc_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_HTTP_CLIENT_MAIN_INSTANCE \

########################################################################
# httpc OBJECTIVE_HEADERS
#
#httpc_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/vos/app/console/protocol/http/client/main.hh \

# httpc OBJECTIVE_SOURCES
#
#httpc_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/vos/app/console/protocol/http/client/main.mm \

########################################################################
# httpc HEADERS
#
httpc_HEADERS += \
$${RETE_SRC}/vos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/vos/app/console/network/base/main.hpp \
$${RETE_SRC}/vos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/vos/app/console/network/client/main.hpp \
$${RETE_SRC}/vos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/vos/app/console/network/server/main.hpp \
\
$${RETE_SRC}/vos/app/console/rete/base/main_opt.hpp \
$${RETE_SRC}/vos/app/console/rete/base/main.hpp \
$${RETE_SRC}/vos/app/console/rete/client/main_opt.hpp \
$${RETE_SRC}/vos/app/console/rete/client/main.hpp \
$${RETE_SRC}/vos/app/console/rete/server/main_opt.hpp \
$${RETE_SRC}/vos/app/console/rete/server/main.hpp \
\
$${STARA_SRC}/vos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/server/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/xttp/main.hpp \
\
$${STARA_SRC}/vos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/server/main.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/main_opt.hpp \
$${STARA_SRC}/vos/app/console/protocol/http/main.hpp \
\
$${STARA_SRC}/vos/app/console/xttp/base/main_opt.hpp \
$${STARA_SRC}/vos/app/console/xttp/base/main.hpp \
$${STARA_SRC}/vos/app/console/xttp/client/main_opt.hpp \
$${STARA_SRC}/vos/app/console/xttp/client/main.hpp \
$${STARA_SRC}/vos/app/console/xttp/server/main_opt.hpp \
$${STARA_SRC}/vos/app/console/xttp/server/main.hpp \
$${STARA_SRC}/vos/app/console/xttp/main_opt.hpp \
$${STARA_SRC}/vos/app/console/xttp/main.hpp \
\
$${STARA_SRC}/vos/app/console/http/base/main_opt.hpp \
$${STARA_SRC}/vos/app/console/http/base/main.hpp \
$${STARA_SRC}/vos/app/console/http/client/main_opt.hpp \
$${STARA_SRC}/vos/app/console/http/client/main.hpp \
$${STARA_SRC}/vos/app/console/http/server/main_opt.hpp \
$${STARA_SRC}/vos/app/console/http/server/main.hpp \
$${STARA_SRC}/vos/app/console/http/main_opt.hpp \
$${STARA_SRC}/vos/app/console/http/main.hpp \
\
$${NADIR_SRC}/vos/console/main_main.hpp \

# httpc SOURCES
#
httpc_SOURCES += \
$${STARA_SRC}/vos/app/console/http/client/main_opt.cpp \
$${STARA_SRC}/vos/app/console/http/client/main.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \

########################################################################
# httpc FRAMEWORKS
#
httpc_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# httpc LIBS
#
httpc_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
#QT -= gui core



///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 9/20/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_XTTP_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_XTTP_MAIN_OPT_HPP

#include "vos/app/console/network/main.hpp"
#include "vos/app/console/protocol/xttp/main.hpp"
#include "vos/app/console/xttp/client/main.hpp"
#include "vos/app/console/xttp/server/main.hpp"

#define VOS_APP_CONSOLE_XTTP_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_XTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_XTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_XTTP_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_XTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS \

#define VOS_APP_CONSOLE_XTTP_MAIN_ARGS 0
#define VOS_APP_CONSOLE_XTTP_MAIN_ARGV 0,

namespace vos {
namespace app {
namespace console {
namespace xttp {

/// class main_optt
template 
<class TExtends = server::maint<server::main_optt
<protocol::xttp::server::maint<protocol::xttp::server::main_optt
<client::maint<client::main_optt<protocol::xttp::client::maint
<protocol::xttp::client::main_optt<protocol::xttp::base::maint
<protocol::xttp::base::main_optt<network::main> > > > > > > > > >, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    /// constructors / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_XTTP_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_XTTP_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_XTTP_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_XTTP_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace xttp
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_XTTP_MAIN_OPT_HPP

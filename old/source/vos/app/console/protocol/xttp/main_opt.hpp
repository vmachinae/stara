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
///   Date: 4/22/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_PROTOCOL_XTTP_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_PROTOCOL_XTTP_MAIN_OPT_HPP

#include "vos/app/console/main.hpp"
#include "vos/app/console/protocol/xttp/client/main.hpp"
#include "vos/app/console/protocol/xttp/server/main.hpp"

/*
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPT "request"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG ""
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTUSE "Send xttp request"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_S "r"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C 'r'
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPT "respond"
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTARG ""
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTUSE "Send xttp response"
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_S "s"
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_C 's'
#define VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_C}, \
*/
#define VOS_PROTOCOL_XTTP_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    /*VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_S \
    VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_S */

#define VOS_PROTOCOL_XTTP_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    /*VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTION \
    VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTION */

#define VOS_PROTOCOL_XTTP_MAIN_OPTIONS_CHARS \
    VOS_PROTOCOL_XTTP_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_CONSOLE_MAIN_OPTIONS_CHARS \

#define VOS_PROTOCOL_XTTP_MAIN_OPTIONS_OPTIONS \
    VOS_PROTOCOL_XTTP_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_CONSOLE_MAIN_OPTIONS_OPTIONS \

#define VOS_PROTOCOL_XTTP_MAIN_ARUMENTS_CHARS 0
#define VOS_PROTOCOL_XTTP_MAIN_ARUMENTS_ARGS 0

namespace vos {
namespace app {
namespace console {
namespace protocol {
namespace xttp {

/// class main_optt
template 
<class TExtends = /*console::main*/server::maint
 <server::main_optt<client::maint<client::main_optt<> > > >, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    /*typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };*/

    /// constructor / destructor
    main_optt(/*): run_(0*/) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }
public:

protected:
    /*/// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = this->usage(argc, argv, env);
        }
        return err;
    }
    virtual int request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }*/

    /// ...options...
    /*virtual int on_request_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::request_run;
        return err;
    }
    virtual const char_t* request_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        chars = VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTUSE;
        return chars;
    }
    virtual int on_respond_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::respond_run;
        return err;
    }
    virtual const char_t* respond_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        chars = VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTUSE;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C:
            err = this->on_request_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_C:
            err = this->on_respond_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C:
            chars = request_option_usage(optarg, longopt);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_RESPOND_OPTVAL_C:
            chars = respond_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }*/
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_PROTOCOL_XTTP_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_PROTOCOL_XTTP_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = VOS_PROTOCOL_XTTP_MAIN_ARUMENTS_ARGS;
        return VOS_PROTOCOL_XTTP_MAIN_ARUMENTS_CHARS;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace xttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_PROTOCOL_XTTP_MAIN_OPT_HPP 

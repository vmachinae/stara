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
///   Date: 8/14/2020, 4/29/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_PROTOCOL_XTTP_CLIENT_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_PROTOCOL_XTTP_CLIENT_MAIN_OPT_HPP

//#include "vos/app/console/main.hpp"
#include "vos/app/console/protocol/xttp/base/main.hpp"

#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPT "request"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG "[{ filename | url }]"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTUSE "Send " VOS_APP_CONSOLE_PROTOCOL_xttp " request"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_S "r::"
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C 'r'
#define VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPT "get"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG "[{ POST | GET | ...}]"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTUSE "GET " VOS_APP_CONSOLE_PROTOCOL_xttp " request method"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_S "g::"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_C 'g'
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPT "post"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG "[{ GET | POST | ...}]"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTUSE "POST " VOS_APP_CONSOLE_PROTOCOL_xttp " request method"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_S "t::"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_C 't'
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPT "method"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG "{ GET | POST | ...}"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTUSE VOS_APP_CONSOLE_PROTOCOL_Xttp " request method"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_S "m::"
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_C 'm'
#define VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_METHOD_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPT "parameter"
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG_RESULT 0
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG "{ / | ...}"
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTUSE VOS_APP_CONSOLE_PROTOCOL_Xttp " request parameter"
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_S "e::"
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_C 'e'
#define VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTION \
   {VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPT, \
    VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG_REQUIRED, \
    VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG_RESULT, \
    VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_C}, \

#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTVAL_S \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_S \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_S \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_S \
    VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_S \
    /*VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \*/

#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTION \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTION \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTION \
    VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTION \
    VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTION \
    /*VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \*/

#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_CHARS \
    VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS \
    /*VOS_CONSOLE_MAIN_OPTIONS_CHARS*/

#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS \
    VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS \
    /*VOS_CONSOLE_MAIN_OPTIONS_OPTIONS*/

#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_ARUMENTS_CHARS 0
#define VOS_PROTOCOL_XTTP_CLIENT_MAIN_ARUMENTS_ARGS 0

namespace vos {
namespace app {
namespace console {
namespace protocol {
namespace xttp {
namespace client {

/// class main_optt
template <class TExtends = console::protocol::xttp::base::main, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    typedef typename extends::headers_t headers_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;
    typedef typename extends::content_t content_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...request_run
    virtual int request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_request_run(argc, argv, env))) {
            int err2 = 0;
            err = request_run(argc, argv, env);
            if ((err2 = after_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...set_request_run
    virtual int set_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_request_run;
        return err;
    }
    virtual int before_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_run(argc, argv, env))) {
            int err2 = 0;
            err = set_request_run(argc, argv, env);
            if ((err2 = after_set_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...method_run
    virtual int method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_method_run(argc, argv, env))) {
            int err2 = 0;
            err = method_run(argc, argv, env);
            if ((err2 = after_method_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...set_method_run
    virtual int set_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_method_run;
        return err;
    }
    virtual int before_set_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_method_run(argc, argv, env))) {
            int err2 = 0;
            err = set_method_run(argc, argv, env);
            if ((err2 = after_set_method_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...parameter_run
    virtual int parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_parameter_run(argc, argv, env))) {
            int err2 = 0;
            err = parameter_run(argc, argv, env);
            if ((err2 = after_parameter_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_parameter_run
    virtual int set_parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_parameter_run;
        return err;
    }
    virtual int before_set_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_parameter_run(argc, argv, env))) {
            int err2 = 0;
            err = set_parameter_run(argc, argv, env);
            if ((err2 = after_set_parameter_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_method...
    virtual int set_method_get(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_method_get(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_method_get(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_method_get(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_method_get(argc, argv, env))) {
            int err2 = 0;
            err = set_method_get(argc, argv, env);
            if ((err2 = after_set_method_get(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_method_post(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_method_post(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_method_post(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_method_post(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_method_post(argc, argv, env))) {
            int err2 = 0;
            err = set_method_post(argc, argv, env);
            if ((err2 = after_set_method_post(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_method(const char_t* method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_method(const char_t* method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_method(const char_t* method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_method(const char_t* method, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_method(method, argc, argv, env))) {
            int err2 = 0;
            err = set_method(method, argc, argv, env);
            if ((err2 = after_set_method(method, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_parameter
    virtual int set_parameter(const char_t* parameter, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_parameter(const char_t* parameter, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_parameter(const char_t* parameter, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_parameter(const char_t* parameter, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_parameter(parameter, argc, argv, env))) {
            int err2 = 0;
            err = set_parameter(parameter, argc, argv, env);
            if ((err2 = after_set_parameter(parameter, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...options...
    virtual int on_request_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_request_run(argc, argv, env);
        return err;
    }
    virtual int on_method_get_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_method_get(argc, argv, env);
        return err;
    }
    virtual int on_method_post_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_method_post(argc, argv, env);
        return err;
    }
    virtual int on_method_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t* arg = 0;
        if ((arg = optarg) && (arg[0])) {
            err = all_set_method(arg, argc, argv, env);
        } else {
            err = all_set_method_run(argc, argv, env);
        }
        return err;
    }
    virtual int on_parameter_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t* arg = 0;
        if ((arg = optarg) && (arg[0])) {
            err = all_set_parameter(arg, argc, argv, env);
        } else {
            err = all_set_parameter_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* request_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTARG;
        chars = VOS_PROTOCOL_XTTP_MAIN_REQUEST_OPTUSE;
        return chars;
    }
    virtual const char_t* method_get_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTARG;
        const char_t* chars = VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTUSE;
        return chars;
    }
    virtual const char_t* method_post_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTARG;
        const char_t* chars = VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTUSE;
        return chars;
    }
    virtual const char_t* method_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTARG;
        const char_t* chars = VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTUSE;
        return chars;
    }
    virtual const char_t* parameter_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTARG;
        const char_t* chars = VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTUSE;
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
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_C:
            err = this->on_method_get_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_C:
            err = this->on_method_post_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_C:
            err = this->on_method_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_C:
            err = this->on_parameter_option(optval, optarg, optname, optind, argc, argv, env);
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
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_GET_OPTVAL_C:
            chars = method_get_option_usage(optarg, longopt);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_POST_OPTVAL_C:
            chars = method_post_option_usage(optarg, longopt);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_METHOD_OPTVAL_C:
            chars = method_option_usage(optarg, longopt);
            break;
        case VOS_PROTOCOL_XTTP_MAIN_PARAMETER_OPTVAL_C:
            chars = parameter_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_PROTOCOL_XTTP_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = VOS_PROTOCOL_XTTP_CLIENT_MAIN_ARUMENTS_ARGS;
        return VOS_PROTOCOL_XTTP_CLIENT_MAIN_ARUMENTS_CHARS;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace xttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_PROTOCOL_XTTP_CLIENT_MAIN_OPT_HPP

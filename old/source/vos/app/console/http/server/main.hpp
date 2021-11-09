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
///   File: main.hpp
///
/// Author: $author$
///   Date: 9/8/2020, 9/24/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_HTTP_SERVER_MAIN_HPP
#define VOS_APP_CONSOLE_HTTP_SERVER_MAIN_HPP

#include "vos/app/console/http/server/main_opt.hpp"

namespace vos {
namespace app {
namespace console {
namespace http {
namespace server {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    typedef typename extends::content_t content_t;
    typedef typename extends::message_t message_t;
    typedef typename extends::request_t request_t;
    typedef typename extends::response_t response_t;

    /// ...process_response_to...
    virtual int process_response_to(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        switch (request.line().method().which()) {

        case vos::protocol::http::request::method::CONNECT:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_CONNECT(...)...");
            err = all_process_response_to_CONNECT(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_CONNECT(...)");
            break;
        
        case vos::protocol::http::request::method::DELETE:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_DELETE(...)...");
            err = all_process_response_to_DELETE(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_DELETE(...)");
            break;
        
        case vos::protocol::http::request::method::GET:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_GET(...)...");
            err = all_process_response_to_GET(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_GET(...)");
            break;
        
        case vos::protocol::http::request::method::HEAD:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_HEAD(...)...");
            err = all_process_response_to_HEAD(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_HEAD(...)");
            break;
        
        case vos::protocol::http::request::method::OPTIONS:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_OPTIONS(...)...");
            err = all_process_response_to_OPTIONS(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_OPTIONS(...)");
            break;
        
        case vos::protocol::http::request::method::PATCH:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_PATCH(...)...");
            err = all_process_response_to_PATCH(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_PATCH(...)");
            break;
        
        case vos::protocol::http::request::method::POST:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_POST(...)...");
            err = all_process_response_to_POST(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_POST(...)");
            break;
        
        case vos::protocol::http::request::method::PUT:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_PUT(...)...");
            err = all_process_response_to_PUT(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_PUT(...)");
            break;
        
        case vos::protocol::http::request::method::TRACE:
            LOGGER_IS_LOGGED_DEBUG("all_process_response_to_TRACE(...)...");
            err = all_process_response_to_TRACE(writer, response, request, reader, argc, argv, env);
            LOGGER_IS_LOGGED_DEBUG("..." << err << " = all_process_response_to_TRACE(...)");
            break;

        default:
            err = extends::process_response_to(writer, response, request, reader, argc, argv, env);
            break;
        } /// switch
        return err;
    }

    /// ...process_response_to_CONNECT...
    virtual int process_response_to_CONNECT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_CONNECT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_CONNECT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_CONNECT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_CONNECT(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_CONNECT(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_CONNECT(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_DELETE...
    virtual int process_response_to_DELETE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_DELETE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_DELETE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_DELETE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_DELETE(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_DELETE(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_DELETE(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_GET...
    virtual int process_response_to_GET(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_GET(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_GET(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_GET(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_GET(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_GET(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_GET(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_HEAD...
    virtual int process_response_to_HEAD(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_HEAD(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_HEAD(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_HEAD(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_HEAD(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_HEAD(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_HEAD(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_OPTIONS...
    virtual int process_response_to_OPTIONS(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_OPTIONS(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_OPTIONS(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_OPTIONS(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_OPTIONS(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_OPTIONS(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_OPTIONS(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_PATCH...
    virtual int process_response_to_PATCH(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_PATCH(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_PATCH(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_PATCH(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_PATCH(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_PATCH(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_PATCH(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_POST...
    virtual int process_response_to_POST(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_POST(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_POST(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_POST(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_POST(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_POST(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_POST(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_PUT...
    virtual int process_response_to_PUT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_PUT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_PUT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_PUT(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_PUT(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_PUT(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_PUT(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_to_TRACE...
    virtual int process_response_to_TRACE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_process_response_to_TRACE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_to_TRACE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_to_TRACE(writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_to_TRACE(writer, response, request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_to_TRACE(writer, response, request, reader, argc, argv, env);
            if ((err2 = after_process_response_to_TRACE(writer, response, request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace http
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_HTTP_SERVER_MAIN_HPP

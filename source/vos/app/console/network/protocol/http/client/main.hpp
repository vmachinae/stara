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
///   Date: 8/13/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP
#define VOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP

#include "vos/app/console/network/protocol/http/client/main_opt.hpp"
#include "vos/protocol/http/response/message.hpp"

namespace vos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace http {
namespace client {

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
    maint(): response_content_size_(2048) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    typedef vos::protocol::xttp::message::body::content content_t;
    typedef vos::protocol::http::response::message response_t;
    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_t request_t;

    /// send_request
    virtual int send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        request_t &rq = this->request();
        int err = 0;
        err = send_request(rq, cn, argc, argv, env);
        return err;
    }
    virtual int send_request(request_t &rq, vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::reader reader(cn);
        vos::network::sockets::writer writer(cn);
        int err = 0;
        err = send_request(reader, writer, rq, argc, argv, env);
        return err;
    }
    virtual int send_request
    (vos::network::sockets::reader& reader, 
     vos::network::sockets::writer& writer, request_t &rq, int argc, char_t** argv, char_t**env) {
        ssize_t amount = 0;
        int err = 0;
        err = this->all_write_request(amount, writer, rq, argc, argv, env);
        return err;
    }

    /// recv_response
    virtual int recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        response_t &rs = this->response();
        int err = 0;
        err = recv_response(rs, cn, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t &rs, vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::reader reader(cn);
        int err = 0;
        err = recv_response(rs, reader, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t &rs, vos::network::sockets::reader& reader, int argc, char_t** argv, char_t**env) {
        char_t c = 0; ssize_t count = 0;
        int err = 0;
        if ((rs.read_with_content(count, c, reader))) {
            const char_t* chars = 0; size_t length = 0;
            if ((chars = rs.has_chars(length)) && (!chars[length])) {
                this->errlln(__LOCATION__, "...response = \"", chars, "\"", null);
            }
            if ((chars = rs.content_chars(length)) && (!chars[length])) {
                this->errlln(__LOCATION__, "...content = \"", chars, "\"", null);
            }
            err = process_response(rs, reader, argc, argv, env);
        }
        return err;
    }

    /// process_response
    virtual int process_response(response_t &rs, vos::network::sockets::reader& reader, int argc, char_t** argv, char_t**env) {
        const char_t* chars = 0; size_t length = 0;
        int err = 0;
        if ((chars = rs.has_chars(length))) {
            this->out(chars, length);
            if ((chars = rs.content_chars(length))) {
                this->out(chars, length);
            }
            this->outln();
            this->out_flush();
        }
        return err;
    }

    /// response.. 
    virtual response_t& response() const {
        return (response_t&)response_;
    }
    virtual content_t& response_content() const {
        return (content_t&)response_content_;
    }
    virtual size_t& response_content_size() const {
        return (size_t&)response_content_size_;
    }

protected:
    vos::protocol::http::response::message response_;
    size_t response_content_size_;
    content_t response_content_;
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace http
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP

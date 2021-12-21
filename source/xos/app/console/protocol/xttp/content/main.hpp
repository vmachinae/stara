///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 12/21/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_XTTP_CONTENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_CONTENT_MAIN_HPP

#include "xos/app/console/protocol/xttp/content/main_opt.hpp"
#include "xos/protocol/http/message/body/content.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace xttp {
namespace content {

/// class maint
template 
<class TExtends = xos::app::console::protocol::xttp::content::main_optt<>, 
class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef xos::protocol::http::message::body::content content_t;

    /// content
    virtual content_t& set_content(const content_t& to) {
        const char_t* to_chars = to.chars();
        return set_content(to_chars);
    }
    virtual content_t& set_content(const char_t* to) {
        content_t& content = this->content();
        content.set(to);
        return content;
    }
    virtual content_t& content() const {
        return (content_t&)content_;
    }

protected:
    xos::protocol::http::message::body::content content_;
}; /// class maint
typedef maint<> main;

} /// namespace content
} /// namespace xttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_XTTP_CONTENT_MAIN_HPP

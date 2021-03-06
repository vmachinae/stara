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
///   File: version.hpp
///
/// Author: $author$
///   Date: 3/19/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_LIB_STARA_VERSION_HPP
#define VOS_LIB_STARA_VERSION_HPP

#include "vos/lib/version.hpp"

namespace vos {
namespace lib {
namespace stara {

/// class version
class exported version {
public:
    /// which
    static const lib::version& which();
}; /// class version

} /// namespace stara
} /// namespace lib
} /// namespace vos

#endif /// ndef VOS_LIB_STARA_VERSION_HPP 

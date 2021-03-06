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
///   Date: 6/27/2020, 8/4/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_SONY_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_SONY_MAIN_OPT_HPP

#include "vos/app/console/http/main.hpp"

#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPT "previous"
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG "[ URI ]"
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTUSE "PLay previous"
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_S "e::"
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_C 'e'
#define VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPT "next"
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG "[ URI ]"
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTUSE "Play next"
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_S "x::"
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_C 'x'
#define VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPT "stop"
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG "[ URI ]"
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTUSE "Stop play"
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_S "t::"
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_C 't'
#define VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_STOP_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPT "pause"
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG "[ URI ]"
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTUSE "Pause play"
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_S "u::"
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_C 'u'
#define VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPT "resume"
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG "[ URI ]"
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTUSE "Resume play"
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_S "m::"
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_C 'm'
#define VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPT "replay"
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG "[{ all | off }]"
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTUSE "Set/Get replay" 
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_S "y::"
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_C 'y'
#define VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPT "shuffle"
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG "[{ all | off }]"
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTUSE "Set/Get shuffle"
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_S "s::"
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_C 's'
#define VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPT "volume"
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG "[{ 0..n }]"
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTUSE "Set/Get Volume level"
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_S "v::"
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_C 'v'
#define VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPT "hdmi-input"
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG "[{ 1..n }]"
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTUSE "Set hdmi[n]/tv Imput"
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_S "d::"
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_C 'd'
#define VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPT "input"
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG "[{ extInput:tv | extInput:hdmi?port={1..n} }]"
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTUSE "Set/Get Input"
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_S "i::"
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_C 'i'
#define VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPT "power-on"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG ""
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTUSE "Turn Power on"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_S "n::"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_C 'n'
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPT "power-off"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG ""
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTUSE "Turn Power off"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_S "f::"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_C 'f'
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPT "power"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG "{ active | off }"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTUSE "Turn Power on/off"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_S "w::"
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_C 'w'
#define VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTION \
   {VOS_APP_CONSOLE_SONY_MAIN_POWER_OPT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG_RESULT, \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_C}, \

#define VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_S \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_S \

#define VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTION \
    VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTION \

#define VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_CHARS \
   VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_CHARS \
/*   VOS_NETWORK_BASE_MAIN_OPTIONS_CHARS \*/
/*   VOS_APP_CONSOLE_HTTP_MAIN_OPTIONS_CHARS \*/

#define VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_OPTIONS \
   VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_OPTIONS \
/*   VOS_NETWORK_BASE_MAIN_OPTIONS_OPTIONS \*/
/*   VOS_APP_CONSOLE_HTTP_MAIN_OPTIONS_OPTIONS \*/

#define VOS_APP_CONSOLE_SONY_MAIN_ARUMENTS_CHARS 0
#define VOS_APP_CONSOLE_SONY_MAIN_ARUMENTS_ARGS 0

namespace vos {
namespace app {
namespace console {
namespace sony {

/// class main_optt
template 
<class TExtends = vos::app::console::http::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::json_number_t json_number_t;
    typedef typename extends::json_node_t json_node_t;
    typedef typename extends::json_array_t json_array_t;
    typedef typename extends::json_object_t json_object_t;
    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_t request_t;
    typedef typename extends::response_t response_t;
    typedef typename extends::message_t message_t;

    /// ...option...
    virtual int on_previous_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_next_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_pause_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_resume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_replay_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_shuffle_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_volume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_tv_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_hdmi_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_hdmi_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = on_set_hdmi_input_option(optval, optarg, optname, optind, argc, argv, env);
        } else {
            err = on_set_tv_input_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual int on_set_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_get_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = on_set_input_option(optval, optarg, optname, optind, argc, argv, env);
        } else {
            err = on_get_input_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_C:
            err = this->on_previous_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_C:
            err = this->on_next_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_C:
            err = this->on_stop_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_C:
            err = this->on_pause_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_C:
            err = this->on_resume_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_C:
            err = this->on_replay_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_C:
            err = this->on_shuffle_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_C:
            err = this->on_volume_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_C:
            err = this->on_hdmi_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_C:
            err = this->on_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_C:
            err = this->on_power_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = this->network_server_on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* previous_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTUSE;
        return chars;
    }
    virtual const char_t* next_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTUSE;
        return chars;
    }
    virtual const char_t* stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTUSE;
        return chars;
    }
    virtual const char_t* pause_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTUSE;
        return chars;
    }
    virtual const char_t* resume_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTUSE;
        return chars;
    }
    virtual const char_t* replay_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTUSE;
        optarg = VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTARG;
        return chars;
    }
    virtual const char_t* shuffle_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTUSE;
        optarg = VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTARG;
        return chars;
    }
    virtual const char_t* volume_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTUSE;
        return chars;
    }
    virtual const char_t* hdmi_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTUSE;
        optarg = VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTARG;
        return chars;
    }
    virtual const char_t* input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTUSE;
        optarg = VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTARG;
        return chars;
    }
    virtual const char_t* power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTUSE;
        return chars;
    }
    virtual const char_t* power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTUSE;
        return chars;
    }
    virtual const char_t* power_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTUSE;
        return chars;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_APP_CONSOLE_SONY_MAIN_PREVIOUS_OPTVAL_C:
            chars = previous_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_NEXT_OPTVAL_C:
            chars = next_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_STOP_OPTVAL_C:
            chars = stop_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_PAUSE_OPTVAL_C:
            chars = pause_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_REPLAY_OPTVAL_C:
            chars = replay_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_SHUFFLE_OPTVAL_C:
            chars = shuffle_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_RESUME_OPTVAL_C:
            chars = resume_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_VOLUME_OPTVAL_C:
            chars = volume_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_HDMI_INPUT_OPTVAL_C:
            chars = hdmi_input_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_INPUT_OPTVAL_C:
            chars = input_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_ON_OPTVAL_C:
            chars = power_on_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_OFF_OPTVAL_C:
            chars = power_off_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_SONY_MAIN_POWER_OPTVAL_C:
            chars = power_option_usage(optarg, longopt);
            break;
        default:
            chars = this->network_server_option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_SONY_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace sony
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_SONY_MAIN_OPT_HPP

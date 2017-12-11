#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClientRequestError { /**/ 
    ALREADY_DECLINE_WITHDRAW_e = 3, /**/ 
    ALREADY_INVITED_e = 1, /**/ 
    ALREADY_IN_PHASE_e = 5, /**/ 
    ALREADY_MEMBER_e = 0, /**/ 
    ALREADY_SUGGESTED_e = 2, /**/ 
    ALREADY_VOTE_WITHDRAW_e = 4, /**/ 
    CAPTAIN_NOT_ALLOWED_e = 6, /**/ 
    FAIL_INVITE_e = 7, /**/ 
    FAIL_SUGGESTINVITE_e = 8, /**/ 
    INACTIVE_PHASE_e = 15, /**/ 
    INACTIVE_REGISTRATION_e = 14, /**/ 
    INTERNAL_ERROR_e = 16, /**/ 
    INVALID_BRACKET_e = 30, /**/ 
    INVALID_BUY_BACK_e = 18, /**/ 
    INVALID_CHECKELIGIBILITY_SIZE_e = 29, /**/ 
    INVALID_INVITEE_e = 22, /**/ 
    INVALID_LOGO_e = 25, /**/ 
    INVALID_LOGOCOLOR_e = 26, /**/ 
    INVALID_MATCHID_e = 31, /**/ 
    INVALID_MATCHSTATUS_FORGAMEEND_e = 34, /**/ 
    INVALID_NAME_e = 27, /**/ 
    INVALID_PHASE_e = 21, /**/ 
    INVALID_PLAYER_e = 32, /**/ 
    INVALID_POSITION_e = 24, /**/ 
    INVALID_ROSTER_e = 17, /**/ 
    INVALID_ROSTER_MEMBER_SIZE_e = 23, /**/ 
    INVALID_SHORTNAME_e = 28, /**/ 
    INVALID_SUB_e = 19, /**/ 
    INVALID_TOURNAMENT_e = 20, /**/ 
    INVALID_WITHDRAW_e = 33, /**/ 
    IN_OTHER_PENDINGROSTER_e = 12, /**/ 
    IN_OTHER_PHASE_e = 13, /**/ 
    IN_OTHER_ROSTER_e = 11, /**/ 
    LOGOCOLOR_NOT_ALLOWED_e = 10, /**/ 
    LOGO_NOT_ALLOWED_e = 9, /**/ 
    MAX_INVITED_e = 35, /**/ 
    MAX_ROSTER_FETCHSIZE_e = 37, /**/ 
    MAX_SUBED_e = 36, /**/ 
    MAX_SUB_SIZE_e = 38, /**/ 
    NOT_ALLOWED_DELETE_TOURNAMENT_e = 49, /**/ 
    NOT_CAPTAIN_e = 43, /**/ 
    NOT_ENOUGH_TICKETS_e = 48, /**/ 
    NOT_INVITEE_e = 45, /**/ 
    NOT_MEMBER_e = 44, /**/ 
    NOT_SEED_INTO_LEAGUE_e = 46, /**/ 
    NOT_UNANIMOUS_e = 47, /**/ 
    NO_AVAILABLE_PHASE_e = 42, /**/ 
    NO_PERMISSION_CREATE_ROSTER_e = 40, /**/ 
    NO_PERMISSION_REGISTER_ROSTER_e = 41, /**/ 
    NO_SAME_PLAYER_e = 39, /**/ 
    OVER_INVITE_e = 51, /**/ 
    OVER_SUGGESTION_INVITE_e = 50, /**/ 
    PENDING_ROSTER_CLOSE_e = 54, /**/ 
    PENDING_ROSTER_FULL_e = 53, /**/ 
    PENDING_ROSTER_NOT_READY_e = 52, /**/ 
    ROSTER_DISBAND_NOT_ALLOWED_e = 57, /**/ 
    ROSTER_ELIMINATED_e = 55, /**/ 
    ROSTER_NOT_ELIMINATED_e = 56, /**/ 
    SUGGEST_INVITEE_NOT_EXIST_e = 58, /**/ 
    TICKET_ALREADY_SET_e = 59, /**/ 
    TICKET_NOT_SET_e = 62, /**/ 
    TICKET_OFFER_NOT_EXIST_e = 60, /**/ 
    TICKET_OFFER_OVER_LIMIT_e = 61, /**/ 
    WITHDRAW_CANCEL_NOT_ALLOWED_e = 64, /**/ 
    WITHDRAW_LOCKOUT_e = 65, /**/ 
    WITHDRAW_NOT_ALLOWED_e = 63, /**/ 
  };
  static void to_json(json& j, const ClientRequestError& v) {
    switch(v) { 
    case ClientRequestError::ALREADY_DECLINE_WITHDRAW_e:
      j = "ALREADY_DECLINE_WITHDRAW";
    break;
    case ClientRequestError::ALREADY_INVITED_e:
      j = "ALREADY_INVITED";
    break;
    case ClientRequestError::ALREADY_IN_PHASE_e:
      j = "ALREADY_IN_PHASE";
    break;
    case ClientRequestError::ALREADY_MEMBER_e:
      j = "ALREADY_MEMBER";
    break;
    case ClientRequestError::ALREADY_SUGGESTED_e:
      j = "ALREADY_SUGGESTED";
    break;
    case ClientRequestError::ALREADY_VOTE_WITHDRAW_e:
      j = "ALREADY_VOTE_WITHDRAW";
    break;
    case ClientRequestError::CAPTAIN_NOT_ALLOWED_e:
      j = "CAPTAIN_NOT_ALLOWED";
    break;
    case ClientRequestError::FAIL_INVITE_e:
      j = "FAIL_INVITE";
    break;
    case ClientRequestError::FAIL_SUGGESTINVITE_e:
      j = "FAIL_SUGGESTINVITE";
    break;
    case ClientRequestError::INACTIVE_PHASE_e:
      j = "INACTIVE_PHASE";
    break;
    case ClientRequestError::INACTIVE_REGISTRATION_e:
      j = "INACTIVE_REGISTRATION";
    break;
    case ClientRequestError::INTERNAL_ERROR_e:
      j = "INTERNAL_ERROR";
    break;
    case ClientRequestError::INVALID_BRACKET_e:
      j = "INVALID_BRACKET";
    break;
    case ClientRequestError::INVALID_BUY_BACK_e:
      j = "INVALID_BUY_BACK";
    break;
    case ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE_e:
      j = "INVALID_CHECKELIGIBILITY_SIZE";
    break;
    case ClientRequestError::INVALID_INVITEE_e:
      j = "INVALID_INVITEE";
    break;
    case ClientRequestError::INVALID_LOGO_e:
      j = "INVALID_LOGO";
    break;
    case ClientRequestError::INVALID_LOGOCOLOR_e:
      j = "INVALID_LOGOCOLOR";
    break;
    case ClientRequestError::INVALID_MATCHID_e:
      j = "INVALID_MATCHID";
    break;
    case ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND_e:
      j = "INVALID_MATCHSTATUS_FORGAMEEND";
    break;
    case ClientRequestError::INVALID_NAME_e:
      j = "INVALID_NAME";
    break;
    case ClientRequestError::INVALID_PHASE_e:
      j = "INVALID_PHASE";
    break;
    case ClientRequestError::INVALID_PLAYER_e:
      j = "INVALID_PLAYER";
    break;
    case ClientRequestError::INVALID_POSITION_e:
      j = "INVALID_POSITION";
    break;
    case ClientRequestError::INVALID_ROSTER_e:
      j = "INVALID_ROSTER";
    break;
    case ClientRequestError::INVALID_ROSTER_MEMBER_SIZE_e:
      j = "INVALID_ROSTER_MEMBER_SIZE";
    break;
    case ClientRequestError::INVALID_SHORTNAME_e:
      j = "INVALID_SHORTNAME";
    break;
    case ClientRequestError::INVALID_SUB_e:
      j = "INVALID_SUB";
    break;
    case ClientRequestError::INVALID_TOURNAMENT_e:
      j = "INVALID_TOURNAMENT";
    break;
    case ClientRequestError::INVALID_WITHDRAW_e:
      j = "INVALID_WITHDRAW";
    break;
    case ClientRequestError::IN_OTHER_PENDINGROSTER_e:
      j = "IN_OTHER_PENDINGROSTER";
    break;
    case ClientRequestError::IN_OTHER_PHASE_e:
      j = "IN_OTHER_PHASE";
    break;
    case ClientRequestError::IN_OTHER_ROSTER_e:
      j = "IN_OTHER_ROSTER";
    break;
    case ClientRequestError::LOGOCOLOR_NOT_ALLOWED_e:
      j = "LOGOCOLOR_NOT_ALLOWED";
    break;
    case ClientRequestError::LOGO_NOT_ALLOWED_e:
      j = "LOGO_NOT_ALLOWED";
    break;
    case ClientRequestError::MAX_INVITED_e:
      j = "MAX_INVITED";
    break;
    case ClientRequestError::MAX_ROSTER_FETCHSIZE_e:
      j = "MAX_ROSTER_FETCHSIZE";
    break;
    case ClientRequestError::MAX_SUBED_e:
      j = "MAX_SUBED";
    break;
    case ClientRequestError::MAX_SUB_SIZE_e:
      j = "MAX_SUB_SIZE";
    break;
    case ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT_e:
      j = "NOT_ALLOWED_DELETE_TOURNAMENT";
    break;
    case ClientRequestError::NOT_CAPTAIN_e:
      j = "NOT_CAPTAIN";
    break;
    case ClientRequestError::NOT_ENOUGH_TICKETS_e:
      j = "NOT_ENOUGH_TICKETS";
    break;
    case ClientRequestError::NOT_INVITEE_e:
      j = "NOT_INVITEE";
    break;
    case ClientRequestError::NOT_MEMBER_e:
      j = "NOT_MEMBER";
    break;
    case ClientRequestError::NOT_SEED_INTO_LEAGUE_e:
      j = "NOT_SEED_INTO_LEAGUE";
    break;
    case ClientRequestError::NOT_UNANIMOUS_e:
      j = "NOT_UNANIMOUS";
    break;
    case ClientRequestError::NO_AVAILABLE_PHASE_e:
      j = "NO_AVAILABLE_PHASE";
    break;
    case ClientRequestError::NO_PERMISSION_CREATE_ROSTER_e:
      j = "NO_PERMISSION_CREATE_ROSTER";
    break;
    case ClientRequestError::NO_PERMISSION_REGISTER_ROSTER_e:
      j = "NO_PERMISSION_REGISTER_ROSTER";
    break;
    case ClientRequestError::NO_SAME_PLAYER_e:
      j = "NO_SAME_PLAYER";
    break;
    case ClientRequestError::OVER_INVITE_e:
      j = "OVER_INVITE";
    break;
    case ClientRequestError::OVER_SUGGESTION_INVITE_e:
      j = "OVER_SUGGESTION_INVITE";
    break;
    case ClientRequestError::PENDING_ROSTER_CLOSE_e:
      j = "PENDING_ROSTER_CLOSE";
    break;
    case ClientRequestError::PENDING_ROSTER_FULL_e:
      j = "PENDING_ROSTER_FULL";
    break;
    case ClientRequestError::PENDING_ROSTER_NOT_READY_e:
      j = "PENDING_ROSTER_NOT_READY";
    break;
    case ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED_e:
      j = "ROSTER_DISBAND_NOT_ALLOWED";
    break;
    case ClientRequestError::ROSTER_ELIMINATED_e:
      j = "ROSTER_ELIMINATED";
    break;
    case ClientRequestError::ROSTER_NOT_ELIMINATED_e:
      j = "ROSTER_NOT_ELIMINATED";
    break;
    case ClientRequestError::SUGGEST_INVITEE_NOT_EXIST_e:
      j = "SUGGEST_INVITEE_NOT_EXIST";
    break;
    case ClientRequestError::TICKET_ALREADY_SET_e:
      j = "TICKET_ALREADY_SET";
    break;
    case ClientRequestError::TICKET_NOT_SET_e:
      j = "TICKET_NOT_SET";
    break;
    case ClientRequestError::TICKET_OFFER_NOT_EXIST_e:
      j = "TICKET_OFFER_NOT_EXIST";
    break;
    case ClientRequestError::TICKET_OFFER_OVER_LIMIT_e:
      j = "TICKET_OFFER_OVER_LIMIT";
    break;
    case ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED_e:
      j = "WITHDRAW_CANCEL_NOT_ALLOWED";
    break;
    case ClientRequestError::WITHDRAW_LOCKOUT_e:
      j = "WITHDRAW_LOCKOUT";
    break;
    case ClientRequestError::WITHDRAW_NOT_ALLOWED_e:
      j = "WITHDRAW_NOT_ALLOWED";
    break;
    };
  }
  static void from_json(const json& j, ClientRequestError& v) {
    auto s = j.get<std::string>(); 
    if(s == "ALREADY_DECLINE_WITHDRAW") {
      v = ClientRequestError::ALREADY_DECLINE_WITHDRAW_e;
      return;
    } 
    if(s == "ALREADY_INVITED") {
      v = ClientRequestError::ALREADY_INVITED_e;
      return;
    } 
    if(s == "ALREADY_IN_PHASE") {
      v = ClientRequestError::ALREADY_IN_PHASE_e;
      return;
    } 
    if(s == "ALREADY_MEMBER") {
      v = ClientRequestError::ALREADY_MEMBER_e;
      return;
    } 
    if(s == "ALREADY_SUGGESTED") {
      v = ClientRequestError::ALREADY_SUGGESTED_e;
      return;
    } 
    if(s == "ALREADY_VOTE_WITHDRAW") {
      v = ClientRequestError::ALREADY_VOTE_WITHDRAW_e;
      return;
    } 
    if(s == "CAPTAIN_NOT_ALLOWED") {
      v = ClientRequestError::CAPTAIN_NOT_ALLOWED_e;
      return;
    } 
    if(s == "FAIL_INVITE") {
      v = ClientRequestError::FAIL_INVITE_e;
      return;
    } 
    if(s == "FAIL_SUGGESTINVITE") {
      v = ClientRequestError::FAIL_SUGGESTINVITE_e;
      return;
    } 
    if(s == "INACTIVE_PHASE") {
      v = ClientRequestError::INACTIVE_PHASE_e;
      return;
    } 
    if(s == "INACTIVE_REGISTRATION") {
      v = ClientRequestError::INACTIVE_REGISTRATION_e;
      return;
    } 
    if(s == "INTERNAL_ERROR") {
      v = ClientRequestError::INTERNAL_ERROR_e;
      return;
    } 
    if(s == "INVALID_BRACKET") {
      v = ClientRequestError::INVALID_BRACKET_e;
      return;
    } 
    if(s == "INVALID_BUY_BACK") {
      v = ClientRequestError::INVALID_BUY_BACK_e;
      return;
    } 
    if(s == "INVALID_CHECKELIGIBILITY_SIZE") {
      v = ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE_e;
      return;
    } 
    if(s == "INVALID_INVITEE") {
      v = ClientRequestError::INVALID_INVITEE_e;
      return;
    } 
    if(s == "INVALID_LOGO") {
      v = ClientRequestError::INVALID_LOGO_e;
      return;
    } 
    if(s == "INVALID_LOGOCOLOR") {
      v = ClientRequestError::INVALID_LOGOCOLOR_e;
      return;
    } 
    if(s == "INVALID_MATCHID") {
      v = ClientRequestError::INVALID_MATCHID_e;
      return;
    } 
    if(s == "INVALID_MATCHSTATUS_FORGAMEEND") {
      v = ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND_e;
      return;
    } 
    if(s == "INVALID_NAME") {
      v = ClientRequestError::INVALID_NAME_e;
      return;
    } 
    if(s == "INVALID_PHASE") {
      v = ClientRequestError::INVALID_PHASE_e;
      return;
    } 
    if(s == "INVALID_PLAYER") {
      v = ClientRequestError::INVALID_PLAYER_e;
      return;
    } 
    if(s == "INVALID_POSITION") {
      v = ClientRequestError::INVALID_POSITION_e;
      return;
    } 
    if(s == "INVALID_ROSTER") {
      v = ClientRequestError::INVALID_ROSTER_e;
      return;
    } 
    if(s == "INVALID_ROSTER_MEMBER_SIZE") {
      v = ClientRequestError::INVALID_ROSTER_MEMBER_SIZE_e;
      return;
    } 
    if(s == "INVALID_SHORTNAME") {
      v = ClientRequestError::INVALID_SHORTNAME_e;
      return;
    } 
    if(s == "INVALID_SUB") {
      v = ClientRequestError::INVALID_SUB_e;
      return;
    } 
    if(s == "INVALID_TOURNAMENT") {
      v = ClientRequestError::INVALID_TOURNAMENT_e;
      return;
    } 
    if(s == "INVALID_WITHDRAW") {
      v = ClientRequestError::INVALID_WITHDRAW_e;
      return;
    } 
    if(s == "IN_OTHER_PENDINGROSTER") {
      v = ClientRequestError::IN_OTHER_PENDINGROSTER_e;
      return;
    } 
    if(s == "IN_OTHER_PHASE") {
      v = ClientRequestError::IN_OTHER_PHASE_e;
      return;
    } 
    if(s == "IN_OTHER_ROSTER") {
      v = ClientRequestError::IN_OTHER_ROSTER_e;
      return;
    } 
    if(s == "LOGOCOLOR_NOT_ALLOWED") {
      v = ClientRequestError::LOGOCOLOR_NOT_ALLOWED_e;
      return;
    } 
    if(s == "LOGO_NOT_ALLOWED") {
      v = ClientRequestError::LOGO_NOT_ALLOWED_e;
      return;
    } 
    if(s == "MAX_INVITED") {
      v = ClientRequestError::MAX_INVITED_e;
      return;
    } 
    if(s == "MAX_ROSTER_FETCHSIZE") {
      v = ClientRequestError::MAX_ROSTER_FETCHSIZE_e;
      return;
    } 
    if(s == "MAX_SUBED") {
      v = ClientRequestError::MAX_SUBED_e;
      return;
    } 
    if(s == "MAX_SUB_SIZE") {
      v = ClientRequestError::MAX_SUB_SIZE_e;
      return;
    } 
    if(s == "NOT_ALLOWED_DELETE_TOURNAMENT") {
      v = ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT_e;
      return;
    } 
    if(s == "NOT_CAPTAIN") {
      v = ClientRequestError::NOT_CAPTAIN_e;
      return;
    } 
    if(s == "NOT_ENOUGH_TICKETS") {
      v = ClientRequestError::NOT_ENOUGH_TICKETS_e;
      return;
    } 
    if(s == "NOT_INVITEE") {
      v = ClientRequestError::NOT_INVITEE_e;
      return;
    } 
    if(s == "NOT_MEMBER") {
      v = ClientRequestError::NOT_MEMBER_e;
      return;
    } 
    if(s == "NOT_SEED_INTO_LEAGUE") {
      v = ClientRequestError::NOT_SEED_INTO_LEAGUE_e;
      return;
    } 
    if(s == "NOT_UNANIMOUS") {
      v = ClientRequestError::NOT_UNANIMOUS_e;
      return;
    } 
    if(s == "NO_AVAILABLE_PHASE") {
      v = ClientRequestError::NO_AVAILABLE_PHASE_e;
      return;
    } 
    if(s == "NO_PERMISSION_CREATE_ROSTER") {
      v = ClientRequestError::NO_PERMISSION_CREATE_ROSTER_e;
      return;
    } 
    if(s == "NO_PERMISSION_REGISTER_ROSTER") {
      v = ClientRequestError::NO_PERMISSION_REGISTER_ROSTER_e;
      return;
    } 
    if(s == "NO_SAME_PLAYER") {
      v = ClientRequestError::NO_SAME_PLAYER_e;
      return;
    } 
    if(s == "OVER_INVITE") {
      v = ClientRequestError::OVER_INVITE_e;
      return;
    } 
    if(s == "OVER_SUGGESTION_INVITE") {
      v = ClientRequestError::OVER_SUGGESTION_INVITE_e;
      return;
    } 
    if(s == "PENDING_ROSTER_CLOSE") {
      v = ClientRequestError::PENDING_ROSTER_CLOSE_e;
      return;
    } 
    if(s == "PENDING_ROSTER_FULL") {
      v = ClientRequestError::PENDING_ROSTER_FULL_e;
      return;
    } 
    if(s == "PENDING_ROSTER_NOT_READY") {
      v = ClientRequestError::PENDING_ROSTER_NOT_READY_e;
      return;
    } 
    if(s == "ROSTER_DISBAND_NOT_ALLOWED") {
      v = ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED_e;
      return;
    } 
    if(s == "ROSTER_ELIMINATED") {
      v = ClientRequestError::ROSTER_ELIMINATED_e;
      return;
    } 
    if(s == "ROSTER_NOT_ELIMINATED") {
      v = ClientRequestError::ROSTER_NOT_ELIMINATED_e;
      return;
    } 
    if(s == "SUGGEST_INVITEE_NOT_EXIST") {
      v = ClientRequestError::SUGGEST_INVITEE_NOT_EXIST_e;
      return;
    } 
    if(s == "TICKET_ALREADY_SET") {
      v = ClientRequestError::TICKET_ALREADY_SET_e;
      return;
    } 
    if(s == "TICKET_NOT_SET") {
      v = ClientRequestError::TICKET_NOT_SET_e;
      return;
    } 
    if(s == "TICKET_OFFER_NOT_EXIST") {
      v = ClientRequestError::TICKET_OFFER_NOT_EXIST_e;
      return;
    } 
    if(s == "TICKET_OFFER_OVER_LIMIT") {
      v = ClientRequestError::TICKET_OFFER_OVER_LIMIT_e;
      return;
    } 
    if(s == "WITHDRAW_CANCEL_NOT_ALLOWED") {
      v = ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED_e;
      return;
    } 
    if(s == "WITHDRAW_LOCKOUT") {
      v = ClientRequestError::WITHDRAW_LOCKOUT_e;
      return;
    } 
    if(s == "WITHDRAW_NOT_ALLOWED") {
      v = ClientRequestError::WITHDRAW_NOT_ALLOWED_e;
      return;
    } 
  }
} 
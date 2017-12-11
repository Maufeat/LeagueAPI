#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashNotifyReason { /**/ 
    ACCEPT_INVITE_e = 17, /**/ 
    ACCEPT_SUGGESTION_e = 2, /**/ 
    ACCEPT_TICKET_e = 26, /**/ 
    CAPTAIN_LEAVE_e = 20, /**/ 
    CHANGE_LOGO_e = 9, /**/ 
    CHANGE_NAME_e = 10, /**/ 
    CHANGE_NAMETAGLOGO_e = 13, /**/ 
    CHANGE_POSITION_e = 12, /**/ 
    CHANGE_SHORTNAME_e = 11, /**/ 
    DECLINE_INVITE_e = 16, /**/ 
    DECLINE_SUGGESTION_e = 1, /**/ 
    DECLINE_TICKET_e = 25, /**/ 
    DISMISS_e = 7, /**/ 
    INVITE_e = 14, /**/ 
    KICK_e = 21, /**/ 
    LEAVE_e = 19, /**/ 
    OFFER_TICKET_e = 23, /**/ 
    OWNER_CLOSE_e = 6, /**/ 
    OWNER_TRANSFER_e = 8, /**/ 
    READY_e = 4, /**/ 
    RESENT_INVITE_e = 15, /**/ 
    REVOKED_TICKET_e = 24, /**/ 
    REVOKE_INVITE_e = 18, /**/ 
    REVOKE_SUGGESTION_e = 3, /**/ 
    SET_TICKET_e = 22, /**/ 
    SUGGESTION_e = 0, /**/ 
    UNREADY_e = 5, /**/ 
  };
  static void to_json(json& j, const LolClashNotifyReason& v) {
    switch(v) { 
    case LolClashNotifyReason::ACCEPT_INVITE_e:
      j = "ACCEPT_INVITE";
    break;
    case LolClashNotifyReason::ACCEPT_SUGGESTION_e:
      j = "ACCEPT_SUGGESTION";
    break;
    case LolClashNotifyReason::ACCEPT_TICKET_e:
      j = "ACCEPT_TICKET";
    break;
    case LolClashNotifyReason::CAPTAIN_LEAVE_e:
      j = "CAPTAIN_LEAVE";
    break;
    case LolClashNotifyReason::CHANGE_LOGO_e:
      j = "CHANGE_LOGO";
    break;
    case LolClashNotifyReason::CHANGE_NAME_e:
      j = "CHANGE_NAME";
    break;
    case LolClashNotifyReason::CHANGE_NAMETAGLOGO_e:
      j = "CHANGE_NAMETAGLOGO";
    break;
    case LolClashNotifyReason::CHANGE_POSITION_e:
      j = "CHANGE_POSITION";
    break;
    case LolClashNotifyReason::CHANGE_SHORTNAME_e:
      j = "CHANGE_SHORTNAME";
    break;
    case LolClashNotifyReason::DECLINE_INVITE_e:
      j = "DECLINE_INVITE";
    break;
    case LolClashNotifyReason::DECLINE_SUGGESTION_e:
      j = "DECLINE_SUGGESTION";
    break;
    case LolClashNotifyReason::DECLINE_TICKET_e:
      j = "DECLINE_TICKET";
    break;
    case LolClashNotifyReason::DISMISS_e:
      j = "DISMISS";
    break;
    case LolClashNotifyReason::INVITE_e:
      j = "INVITE";
    break;
    case LolClashNotifyReason::KICK_e:
      j = "KICK";
    break;
    case LolClashNotifyReason::LEAVE_e:
      j = "LEAVE";
    break;
    case LolClashNotifyReason::OFFER_TICKET_e:
      j = "OFFER_TICKET";
    break;
    case LolClashNotifyReason::OWNER_CLOSE_e:
      j = "OWNER_CLOSE";
    break;
    case LolClashNotifyReason::OWNER_TRANSFER_e:
      j = "OWNER_TRANSFER";
    break;
    case LolClashNotifyReason::READY_e:
      j = "READY";
    break;
    case LolClashNotifyReason::RESENT_INVITE_e:
      j = "RESENT_INVITE";
    break;
    case LolClashNotifyReason::REVOKED_TICKET_e:
      j = "REVOKED_TICKET";
    break;
    case LolClashNotifyReason::REVOKE_INVITE_e:
      j = "REVOKE_INVITE";
    break;
    case LolClashNotifyReason::REVOKE_SUGGESTION_e:
      j = "REVOKE_SUGGESTION";
    break;
    case LolClashNotifyReason::SET_TICKET_e:
      j = "SET_TICKET";
    break;
    case LolClashNotifyReason::SUGGESTION_e:
      j = "SUGGESTION";
    break;
    case LolClashNotifyReason::UNREADY_e:
      j = "UNREADY";
    break;
    };
  }
  static void from_json(const json& j, LolClashNotifyReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "ACCEPT_INVITE") {
      v = LolClashNotifyReason::ACCEPT_INVITE_e;
      return;
    } 
    if(s == "ACCEPT_SUGGESTION") {
      v = LolClashNotifyReason::ACCEPT_SUGGESTION_e;
      return;
    } 
    if(s == "ACCEPT_TICKET") {
      v = LolClashNotifyReason::ACCEPT_TICKET_e;
      return;
    } 
    if(s == "CAPTAIN_LEAVE") {
      v = LolClashNotifyReason::CAPTAIN_LEAVE_e;
      return;
    } 
    if(s == "CHANGE_LOGO") {
      v = LolClashNotifyReason::CHANGE_LOGO_e;
      return;
    } 
    if(s == "CHANGE_NAME") {
      v = LolClashNotifyReason::CHANGE_NAME_e;
      return;
    } 
    if(s == "CHANGE_NAMETAGLOGO") {
      v = LolClashNotifyReason::CHANGE_NAMETAGLOGO_e;
      return;
    } 
    if(s == "CHANGE_POSITION") {
      v = LolClashNotifyReason::CHANGE_POSITION_e;
      return;
    } 
    if(s == "CHANGE_SHORTNAME") {
      v = LolClashNotifyReason::CHANGE_SHORTNAME_e;
      return;
    } 
    if(s == "DECLINE_INVITE") {
      v = LolClashNotifyReason::DECLINE_INVITE_e;
      return;
    } 
    if(s == "DECLINE_SUGGESTION") {
      v = LolClashNotifyReason::DECLINE_SUGGESTION_e;
      return;
    } 
    if(s == "DECLINE_TICKET") {
      v = LolClashNotifyReason::DECLINE_TICKET_e;
      return;
    } 
    if(s == "DISMISS") {
      v = LolClashNotifyReason::DISMISS_e;
      return;
    } 
    if(s == "INVITE") {
      v = LolClashNotifyReason::INVITE_e;
      return;
    } 
    if(s == "KICK") {
      v = LolClashNotifyReason::KICK_e;
      return;
    } 
    if(s == "LEAVE") {
      v = LolClashNotifyReason::LEAVE_e;
      return;
    } 
    if(s == "OFFER_TICKET") {
      v = LolClashNotifyReason::OFFER_TICKET_e;
      return;
    } 
    if(s == "OWNER_CLOSE") {
      v = LolClashNotifyReason::OWNER_CLOSE_e;
      return;
    } 
    if(s == "OWNER_TRANSFER") {
      v = LolClashNotifyReason::OWNER_TRANSFER_e;
      return;
    } 
    if(s == "READY") {
      v = LolClashNotifyReason::READY_e;
      return;
    } 
    if(s == "RESENT_INVITE") {
      v = LolClashNotifyReason::RESENT_INVITE_e;
      return;
    } 
    if(s == "REVOKED_TICKET") {
      v = LolClashNotifyReason::REVOKED_TICKET_e;
      return;
    } 
    if(s == "REVOKE_INVITE") {
      v = LolClashNotifyReason::REVOKE_INVITE_e;
      return;
    } 
    if(s == "REVOKE_SUGGESTION") {
      v = LolClashNotifyReason::REVOKE_SUGGESTION_e;
      return;
    } 
    if(s == "SET_TICKET") {
      v = LolClashNotifyReason::SET_TICKET_e;
      return;
    } 
    if(s == "SUGGESTION") {
      v = LolClashNotifyReason::SUGGESTION_e;
      return;
    } 
    if(s == "UNREADY") {
      v = LolClashNotifyReason::UNREADY_e;
      return;
    } 
  }
} 
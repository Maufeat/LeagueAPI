#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolClashNotifyReason {  
    ACCEPT_INVITE_e = 17,
    ACCEPT_SUGGESTION_e = 2,
    ACCEPT_TICKET_e = 26,
    CAPTAIN_LEAVE_e = 20,
    CHANGE_LOGO_e = 9,
    CHANGE_NAME_e = 10,
    CHANGE_NAMETAGLOGO_e = 13,
    CHANGE_POSITION_e = 12,
    CHANGE_SHORTNAME_e = 11,
    DECLINE_INVITE_e = 16,
    DECLINE_SUGGESTION_e = 1,
    DECLINE_TICKET_e = 25,
    DISMISS_e = 7,
    INVITE_e = 14,
    KICK_e = 21,
    LEAVE_e = 19,
    OFFER_TICKET_e = 23,
    OWNER_CLOSE_e = 6,
    OWNER_TRANSFER_e = 8,
    READY_e = 4,
    RESENT_INVITE_e = 15,
    REVOKED_TICKET_e = 24,
    REVOKE_INVITE_e = 18,
    REVOKE_SUGGESTION_e = 3,
    SET_TICKET_e = 22,
    SUGGESTION_e = 0,
    UNREADY_e = 5,
  };
  inline void to_json(json& j, const LolClashNotifyReason& v) {
    if(v == LolClashNotifyReason::ACCEPT_INVITE_e) {
      j = "ACCEPT_INVITE";
      return;
    }
    if(v == LolClashNotifyReason::ACCEPT_SUGGESTION_e) {
      j = "ACCEPT_SUGGESTION";
      return;
    }
    if(v == LolClashNotifyReason::ACCEPT_TICKET_e) {
      j = "ACCEPT_TICKET";
      return;
    }
    if(v == LolClashNotifyReason::CAPTAIN_LEAVE_e) {
      j = "CAPTAIN_LEAVE";
      return;
    }
    if(v == LolClashNotifyReason::CHANGE_LOGO_e) {
      j = "CHANGE_LOGO";
      return;
    }
    if(v == LolClashNotifyReason::CHANGE_NAME_e) {
      j = "CHANGE_NAME";
      return;
    }
    if(v == LolClashNotifyReason::CHANGE_NAMETAGLOGO_e) {
      j = "CHANGE_NAMETAGLOGO";
      return;
    }
    if(v == LolClashNotifyReason::CHANGE_POSITION_e) {
      j = "CHANGE_POSITION";
      return;
    }
    if(v == LolClashNotifyReason::CHANGE_SHORTNAME_e) {
      j = "CHANGE_SHORTNAME";
      return;
    }
    if(v == LolClashNotifyReason::DECLINE_INVITE_e) {
      j = "DECLINE_INVITE";
      return;
    }
    if(v == LolClashNotifyReason::DECLINE_SUGGESTION_e) {
      j = "DECLINE_SUGGESTION";
      return;
    }
    if(v == LolClashNotifyReason::DECLINE_TICKET_e) {
      j = "DECLINE_TICKET";
      return;
    }
    if(v == LolClashNotifyReason::DISMISS_e) {
      j = "DISMISS";
      return;
    }
    if(v == LolClashNotifyReason::INVITE_e) {
      j = "INVITE";
      return;
    }
    if(v == LolClashNotifyReason::KICK_e) {
      j = "KICK";
      return;
    }
    if(v == LolClashNotifyReason::LEAVE_e) {
      j = "LEAVE";
      return;
    }
    if(v == LolClashNotifyReason::OFFER_TICKET_e) {
      j = "OFFER_TICKET";
      return;
    }
    if(v == LolClashNotifyReason::OWNER_CLOSE_e) {
      j = "OWNER_CLOSE";
      return;
    }
    if(v == LolClashNotifyReason::OWNER_TRANSFER_e) {
      j = "OWNER_TRANSFER";
      return;
    }
    if(v == LolClashNotifyReason::READY_e) {
      j = "READY";
      return;
    }
    if(v == LolClashNotifyReason::RESENT_INVITE_e) {
      j = "RESENT_INVITE";
      return;
    }
    if(v == LolClashNotifyReason::REVOKED_TICKET_e) {
      j = "REVOKED_TICKET";
      return;
    }
    if(v == LolClashNotifyReason::REVOKE_INVITE_e) {
      j = "REVOKE_INVITE";
      return;
    }
    if(v == LolClashNotifyReason::REVOKE_SUGGESTION_e) {
      j = "REVOKE_SUGGESTION";
      return;
    }
    if(v == LolClashNotifyReason::SET_TICKET_e) {
      j = "SET_TICKET";
      return;
    }
    if(v == LolClashNotifyReason::SUGGESTION_e) {
      j = "SUGGESTION";
      return;
    }
    if(v == LolClashNotifyReason::UNREADY_e) {
      j = "UNREADY";
      return;
    }
  }
  inline void from_json(const json& j, LolClashNotifyReason& v) {
    if(j.get<std::string>() == "ACCEPT_INVITE") {
      v = LolClashNotifyReason::ACCEPT_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "ACCEPT_SUGGESTION") {
      v = LolClashNotifyReason::ACCEPT_SUGGESTION_e;
      return;
    } 
    if(j.get<std::string>() == "ACCEPT_TICKET") {
      v = LolClashNotifyReason::ACCEPT_TICKET_e;
      return;
    } 
    if(j.get<std::string>() == "CAPTAIN_LEAVE") {
      v = LolClashNotifyReason::CAPTAIN_LEAVE_e;
      return;
    } 
    if(j.get<std::string>() == "CHANGE_LOGO") {
      v = LolClashNotifyReason::CHANGE_LOGO_e;
      return;
    } 
    if(j.get<std::string>() == "CHANGE_NAME") {
      v = LolClashNotifyReason::CHANGE_NAME_e;
      return;
    } 
    if(j.get<std::string>() == "CHANGE_NAMETAGLOGO") {
      v = LolClashNotifyReason::CHANGE_NAMETAGLOGO_e;
      return;
    } 
    if(j.get<std::string>() == "CHANGE_POSITION") {
      v = LolClashNotifyReason::CHANGE_POSITION_e;
      return;
    } 
    if(j.get<std::string>() == "CHANGE_SHORTNAME") {
      v = LolClashNotifyReason::CHANGE_SHORTNAME_e;
      return;
    } 
    if(j.get<std::string>() == "DECLINE_INVITE") {
      v = LolClashNotifyReason::DECLINE_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "DECLINE_SUGGESTION") {
      v = LolClashNotifyReason::DECLINE_SUGGESTION_e;
      return;
    } 
    if(j.get<std::string>() == "DECLINE_TICKET") {
      v = LolClashNotifyReason::DECLINE_TICKET_e;
      return;
    } 
    if(j.get<std::string>() == "DISMISS") {
      v = LolClashNotifyReason::DISMISS_e;
      return;
    } 
    if(j.get<std::string>() == "INVITE") {
      v = LolClashNotifyReason::INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "KICK") {
      v = LolClashNotifyReason::KICK_e;
      return;
    } 
    if(j.get<std::string>() == "LEAVE") {
      v = LolClashNotifyReason::LEAVE_e;
      return;
    } 
    if(j.get<std::string>() == "OFFER_TICKET") {
      v = LolClashNotifyReason::OFFER_TICKET_e;
      return;
    } 
    if(j.get<std::string>() == "OWNER_CLOSE") {
      v = LolClashNotifyReason::OWNER_CLOSE_e;
      return;
    } 
    if(j.get<std::string>() == "OWNER_TRANSFER") {
      v = LolClashNotifyReason::OWNER_TRANSFER_e;
      return;
    } 
    if(j.get<std::string>() == "READY") {
      v = LolClashNotifyReason::READY_e;
      return;
    } 
    if(j.get<std::string>() == "RESENT_INVITE") {
      v = LolClashNotifyReason::RESENT_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKED_TICKET") {
      v = LolClashNotifyReason::REVOKED_TICKET_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKE_INVITE") {
      v = LolClashNotifyReason::REVOKE_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKE_SUGGESTION") {
      v = LolClashNotifyReason::REVOKE_SUGGESTION_e;
      return;
    } 
    if(j.get<std::string>() == "SET_TICKET") {
      v = LolClashNotifyReason::SET_TICKET_e;
      return;
    } 
    if(j.get<std::string>() == "SUGGESTION") {
      v = LolClashNotifyReason::SUGGESTION_e;
      return;
    } 
    if(j.get<std::string>() == "UNREADY") {
      v = LolClashNotifyReason::UNREADY_e;
      return;
    } 
  }
}
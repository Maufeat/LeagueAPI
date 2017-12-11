#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashRosterNotifyReason { /**/ 
    BUYBACK_e = 7, /**/ 
    BUYBACK_READY_e = 6, /**/ 
    BUYBACK_UNREADY_e = 5, /**/ 
    BYE_AUTO_WIN_e = 8, /**/ 
    CHANGE_POSITION_e = 9, /**/ 
    GAME_COMPLETED_e = 15, /**/ 
    GAME_STARTED_e = 16, /**/ 
    GAME_STARTED_ERROR_e = 17, /**/ 
    LOSER_ROUND_COMPLETE_e = 19, /**/ 
    PHASE_CHECKIN_e = 14, /**/ 
    PHASE_READY_e = 13, /**/ 
    PHASE_UNREADY_e = 12, /**/ 
    QUEUE_DODGE_e = 18, /**/ 
    REGISTERED_e = 10, /**/ 
    RESTRICTION_AUTO_WIN_e = 11, /**/ 
    ROSTER_ACCEPT_TICKET_e = 2, /**/ 
    ROSTER_DECLINE_TICKET_e = 3, /**/ 
    ROSTER_OFFER_TICKET_e = 1, /**/ 
    ROSTER_REVOKED_TICKET_e = 4, /**/ 
    ROSTER_SET_TICKET_e = 0, /**/ 
    SUB_ACCEPT_e = 21, /**/ 
    SUB_ACCEPTSUGGEST_e = 25, /**/ 
    SUB_DECLINE_e = 22, /**/ 
    SUB_DECLINESUGGEST_e = 26, /**/ 
    SUB_INVITE_e = 20, /**/ 
    SUB_RECLAIM_e = 27, /**/ 
    SUB_REVOKE_e = 23, /**/ 
    SUB_SUGGEST_e = 24, /**/ 
    VOTE_WITHDRAW_DISMISS_e = 29, /**/ 
    VOTE_WITHDRAW_UPDATE_e = 28, /**/ 
    WINNER_ROUND_COMPLETE_e = 31, /**/ 
    WITHDRAW_e = 30, /**/ 
  };
  static void to_json(json& j, const LolClashRosterNotifyReason& v) {
    switch(v) { 
    case LolClashRosterNotifyReason::BUYBACK_e:
      j = "BUYBACK";
    break;
    case LolClashRosterNotifyReason::BUYBACK_READY_e:
      j = "BUYBACK_READY";
    break;
    case LolClashRosterNotifyReason::BUYBACK_UNREADY_e:
      j = "BUYBACK_UNREADY";
    break;
    case LolClashRosterNotifyReason::BYE_AUTO_WIN_e:
      j = "BYE_AUTO_WIN";
    break;
    case LolClashRosterNotifyReason::CHANGE_POSITION_e:
      j = "CHANGE_POSITION";
    break;
    case LolClashRosterNotifyReason::GAME_COMPLETED_e:
      j = "GAME_COMPLETED";
    break;
    case LolClashRosterNotifyReason::GAME_STARTED_e:
      j = "GAME_STARTED";
    break;
    case LolClashRosterNotifyReason::GAME_STARTED_ERROR_e:
      j = "GAME_STARTED_ERROR";
    break;
    case LolClashRosterNotifyReason::LOSER_ROUND_COMPLETE_e:
      j = "LOSER_ROUND_COMPLETE";
    break;
    case LolClashRosterNotifyReason::PHASE_CHECKIN_e:
      j = "PHASE_CHECKIN";
    break;
    case LolClashRosterNotifyReason::PHASE_READY_e:
      j = "PHASE_READY";
    break;
    case LolClashRosterNotifyReason::PHASE_UNREADY_e:
      j = "PHASE_UNREADY";
    break;
    case LolClashRosterNotifyReason::QUEUE_DODGE_e:
      j = "QUEUE_DODGE";
    break;
    case LolClashRosterNotifyReason::REGISTERED_e:
      j = "REGISTERED";
    break;
    case LolClashRosterNotifyReason::RESTRICTION_AUTO_WIN_e:
      j = "RESTRICTION_AUTO_WIN";
    break;
    case LolClashRosterNotifyReason::ROSTER_ACCEPT_TICKET_e:
      j = "ROSTER_ACCEPT_TICKET";
    break;
    case LolClashRosterNotifyReason::ROSTER_DECLINE_TICKET_e:
      j = "ROSTER_DECLINE_TICKET";
    break;
    case LolClashRosterNotifyReason::ROSTER_OFFER_TICKET_e:
      j = "ROSTER_OFFER_TICKET";
    break;
    case LolClashRosterNotifyReason::ROSTER_REVOKED_TICKET_e:
      j = "ROSTER_REVOKED_TICKET";
    break;
    case LolClashRosterNotifyReason::ROSTER_SET_TICKET_e:
      j = "ROSTER_SET_TICKET";
    break;
    case LolClashRosterNotifyReason::SUB_ACCEPT_e:
      j = "SUB_ACCEPT";
    break;
    case LolClashRosterNotifyReason::SUB_ACCEPTSUGGEST_e:
      j = "SUB_ACCEPTSUGGEST";
    break;
    case LolClashRosterNotifyReason::SUB_DECLINE_e:
      j = "SUB_DECLINE";
    break;
    case LolClashRosterNotifyReason::SUB_DECLINESUGGEST_e:
      j = "SUB_DECLINESUGGEST";
    break;
    case LolClashRosterNotifyReason::SUB_INVITE_e:
      j = "SUB_INVITE";
    break;
    case LolClashRosterNotifyReason::SUB_RECLAIM_e:
      j = "SUB_RECLAIM";
    break;
    case LolClashRosterNotifyReason::SUB_REVOKE_e:
      j = "SUB_REVOKE";
    break;
    case LolClashRosterNotifyReason::SUB_SUGGEST_e:
      j = "SUB_SUGGEST";
    break;
    case LolClashRosterNotifyReason::VOTE_WITHDRAW_DISMISS_e:
      j = "VOTE_WITHDRAW_DISMISS";
    break;
    case LolClashRosterNotifyReason::VOTE_WITHDRAW_UPDATE_e:
      j = "VOTE_WITHDRAW_UPDATE";
    break;
    case LolClashRosterNotifyReason::WINNER_ROUND_COMPLETE_e:
      j = "WINNER_ROUND_COMPLETE";
    break;
    case LolClashRosterNotifyReason::WITHDRAW_e:
      j = "WITHDRAW";
    break;
    };
  }
  static void from_json(const json& j, LolClashRosterNotifyReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "BUYBACK") {
      v = LolClashRosterNotifyReason::BUYBACK_e;
      return;
    } 
    if(s == "BUYBACK_READY") {
      v = LolClashRosterNotifyReason::BUYBACK_READY_e;
      return;
    } 
    if(s == "BUYBACK_UNREADY") {
      v = LolClashRosterNotifyReason::BUYBACK_UNREADY_e;
      return;
    } 
    if(s == "BYE_AUTO_WIN") {
      v = LolClashRosterNotifyReason::BYE_AUTO_WIN_e;
      return;
    } 
    if(s == "CHANGE_POSITION") {
      v = LolClashRosterNotifyReason::CHANGE_POSITION_e;
      return;
    } 
    if(s == "GAME_COMPLETED") {
      v = LolClashRosterNotifyReason::GAME_COMPLETED_e;
      return;
    } 
    if(s == "GAME_STARTED") {
      v = LolClashRosterNotifyReason::GAME_STARTED_e;
      return;
    } 
    if(s == "GAME_STARTED_ERROR") {
      v = LolClashRosterNotifyReason::GAME_STARTED_ERROR_e;
      return;
    } 
    if(s == "LOSER_ROUND_COMPLETE") {
      v = LolClashRosterNotifyReason::LOSER_ROUND_COMPLETE_e;
      return;
    } 
    if(s == "PHASE_CHECKIN") {
      v = LolClashRosterNotifyReason::PHASE_CHECKIN_e;
      return;
    } 
    if(s == "PHASE_READY") {
      v = LolClashRosterNotifyReason::PHASE_READY_e;
      return;
    } 
    if(s == "PHASE_UNREADY") {
      v = LolClashRosterNotifyReason::PHASE_UNREADY_e;
      return;
    } 
    if(s == "QUEUE_DODGE") {
      v = LolClashRosterNotifyReason::QUEUE_DODGE_e;
      return;
    } 
    if(s == "REGISTERED") {
      v = LolClashRosterNotifyReason::REGISTERED_e;
      return;
    } 
    if(s == "RESTRICTION_AUTO_WIN") {
      v = LolClashRosterNotifyReason::RESTRICTION_AUTO_WIN_e;
      return;
    } 
    if(s == "ROSTER_ACCEPT_TICKET") {
      v = LolClashRosterNotifyReason::ROSTER_ACCEPT_TICKET_e;
      return;
    } 
    if(s == "ROSTER_DECLINE_TICKET") {
      v = LolClashRosterNotifyReason::ROSTER_DECLINE_TICKET_e;
      return;
    } 
    if(s == "ROSTER_OFFER_TICKET") {
      v = LolClashRosterNotifyReason::ROSTER_OFFER_TICKET_e;
      return;
    } 
    if(s == "ROSTER_REVOKED_TICKET") {
      v = LolClashRosterNotifyReason::ROSTER_REVOKED_TICKET_e;
      return;
    } 
    if(s == "ROSTER_SET_TICKET") {
      v = LolClashRosterNotifyReason::ROSTER_SET_TICKET_e;
      return;
    } 
    if(s == "SUB_ACCEPT") {
      v = LolClashRosterNotifyReason::SUB_ACCEPT_e;
      return;
    } 
    if(s == "SUB_ACCEPTSUGGEST") {
      v = LolClashRosterNotifyReason::SUB_ACCEPTSUGGEST_e;
      return;
    } 
    if(s == "SUB_DECLINE") {
      v = LolClashRosterNotifyReason::SUB_DECLINE_e;
      return;
    } 
    if(s == "SUB_DECLINESUGGEST") {
      v = LolClashRosterNotifyReason::SUB_DECLINESUGGEST_e;
      return;
    } 
    if(s == "SUB_INVITE") {
      v = LolClashRosterNotifyReason::SUB_INVITE_e;
      return;
    } 
    if(s == "SUB_RECLAIM") {
      v = LolClashRosterNotifyReason::SUB_RECLAIM_e;
      return;
    } 
    if(s == "SUB_REVOKE") {
      v = LolClashRosterNotifyReason::SUB_REVOKE_e;
      return;
    } 
    if(s == "SUB_SUGGEST") {
      v = LolClashRosterNotifyReason::SUB_SUGGEST_e;
      return;
    } 
    if(s == "VOTE_WITHDRAW_DISMISS") {
      v = LolClashRosterNotifyReason::VOTE_WITHDRAW_DISMISS_e;
      return;
    } 
    if(s == "VOTE_WITHDRAW_UPDATE") {
      v = LolClashRosterNotifyReason::VOTE_WITHDRAW_UPDATE_e;
      return;
    } 
    if(s == "WINNER_ROUND_COMPLETE") {
      v = LolClashRosterNotifyReason::WINNER_ROUND_COMPLETE_e;
      return;
    } 
    if(s == "WITHDRAW") {
      v = LolClashRosterNotifyReason::WITHDRAW_e;
      return;
    } 
  }
} 
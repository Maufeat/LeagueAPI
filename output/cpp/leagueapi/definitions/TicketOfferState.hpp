#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class TicketOfferState { /**/ 
    ACCEPTED_e = 1, /**/ 
    ACTIVE_e = 0, /**/ 
    REJECTED_e = 2, /**/ 
    REVOKED_e = 3, /**/ 
  };
  static void to_json(json& j, const TicketOfferState& v) {
    switch(v) { 
    case TicketOfferState::ACCEPTED_e:
      j = "ACCEPTED";
    break;
    case TicketOfferState::ACTIVE_e:
      j = "ACTIVE";
    break;
    case TicketOfferState::REJECTED_e:
      j = "REJECTED";
    break;
    case TicketOfferState::REVOKED_e:
      j = "REVOKED";
    break;
    };
  }
  static void from_json(const json& j, TicketOfferState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ACCEPTED") {
      v = TicketOfferState::ACCEPTED_e;
      return;
    } 
    if(s == "ACTIVE") {
      v = TicketOfferState::ACTIVE_e;
      return;
    } 
    if(s == "REJECTED") {
      v = TicketOfferState::REJECTED_e;
      return;
    } 
    if(s == "REVOKED") {
      v = TicketOfferState::REVOKED_e;
      return;
    } 
  }
} 
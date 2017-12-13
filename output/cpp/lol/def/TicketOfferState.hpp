#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct TicketOfferState {  
    ACCEPTED_e = 1,
    ACTIVE_e = 0,
    REJECTED_e = 2,
    REVOKED_e = 3,
  };
  void to_json(json& j, const TicketOfferState& v) {
    if(v == TicketOfferState::ACCEPTED_e) {
      j = "ACCEPTED";
      return;
    }
    if(v == TicketOfferState::ACTIVE_e) {
      j = "ACTIVE";
      return;
    }
    if(v == TicketOfferState::REJECTED_e) {
      j = "REJECTED";
      return;
    }
    if(v == TicketOfferState::REVOKED_e) {
      j = "REVOKED";
      return;
    }
  }
  void from_json(const json& j, TicketOfferState& v) {
    if(j.get<std::string>() == "ACCEPTED") {
      v = TicketOfferState::ACCEPTED_e;
      return;
    } 
    if(j.get<std::string>() == "ACTIVE") {
      v = TicketOfferState::ACTIVE_e;
      return;
    } 
    if(j.get<std::string>() == "REJECTED") {
      v = TicketOfferState::REJECTED_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKED") {
      v = TicketOfferState::REVOKED_e;
      return;
    } 
  }
}
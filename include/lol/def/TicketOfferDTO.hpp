#pragma once
#include "../base_def.hpp" 
#include "TicketOfferState.hpp"
namespace lol {
  struct TicketOfferDTO { 
    uint64_t offerPlayerId;
    uint64_t receivePlayerId;
    int32_t count;
    TicketOfferState ticketOfferState; 
  };
  inline void to_json(json& j, const TicketOfferDTO& v) {
    j["offerPlayerId"] = v.offerPlayerId; 
    j["receivePlayerId"] = v.receivePlayerId; 
    j["count"] = v.count; 
    j["ticketOfferState"] = v.ticketOfferState; 
  }
  inline void from_json(const json& j, TicketOfferDTO& v) {
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>(); 
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState>(); 
  }
}
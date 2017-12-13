#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/TicketOfferState.hpp>
namespace lol {
  struct TicketOfferDTO { 
    uint64_t offerPlayerId;
    TicketOfferState ticketOfferState;
    uint64_t receivePlayerId;
    int32_t count; 
  };
  void to_json(json& j, const TicketOfferDTO& v) {
  j["offerPlayerId"] = v.offerPlayerId; 
  j["ticketOfferState"] = v.ticketOfferState; 
  j["receivePlayerId"] = v.receivePlayerId; 
  j["count"] = v.count; 
  }
  void from_json(const json& j, TicketOfferDTO& v) {
  v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>(); 
  v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState>(); 
  v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>(); 
  v.count = j.at("count").get<int32_t>(); 
  }
}
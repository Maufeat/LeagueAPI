#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/TicketOfferState.hpp>"

namespace leagueapi {
  struct TicketOfferDTO { /**/ 
    uint64_t offerPlayerId;/**/
    TicketOfferState ticketOfferState;/**/
    int32_t count;/**/
    uint64_t receivePlayerId;/**/
  };
  static void to_json(json& j, const TicketOfferDTO& v) { 
    j["offerPlayerId"] = v.offerPlayerId;
    j["ticketOfferState"] = v.ticketOfferState;
    j["count"] = v.count;
    j["receivePlayerId"] = v.receivePlayerId;
  }
  static void from_json(const json& j, TicketOfferDTO& v) { 
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>(); 
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>(); 
  }
} 
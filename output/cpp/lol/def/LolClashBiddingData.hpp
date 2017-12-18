#pragma once
#include "../base_def.hpp" 
#include "LolClashTicketOffer.hpp"
namespace lol {
  struct LolClashBiddingData { 
    int32_t currentPaid;
    std::vector<LolClashTicketOffer> incomingOffers;
    int32_t currentBid; 
  };
  inline void to_json(json& j, const LolClashBiddingData& v) {
    j["currentPaid"] = v.currentPaid; 
    j["incomingOffers"] = v.incomingOffers; 
    j["currentBid"] = v.currentBid; 
  }
  inline void from_json(const json& j, LolClashBiddingData& v) {
    v.currentPaid = j.at("currentPaid").get<int32_t>(); 
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
  }
}
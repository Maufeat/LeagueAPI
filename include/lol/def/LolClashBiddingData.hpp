#pragma once
#include "../base_def.hpp" 
#include "LolClashTicketOffer.hpp"
namespace lol {
  struct LolClashBiddingData { 
    int32_t currentBid;
    std::vector<LolClashTicketOffer> incomingOffers; 
  };
  inline void to_json(json& j, const LolClashBiddingData& v) {
    j["currentBid"] = v.currentBid; 
    j["incomingOffers"] = v.incomingOffers; 
  }
  inline void from_json(const json& j, LolClashBiddingData& v) {
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>(); 
  }
}
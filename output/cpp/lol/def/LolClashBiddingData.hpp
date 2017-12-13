#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTicketOffer.hpp>
namespace lol {
  struct LolClashBiddingData { 
    int32_t currentPaid;
    std::vector<LolClashTicketOffer> incomingOffers;
    int32_t currentBid; 
  };
  void to_json(json& j, const LolClashBiddingData& v) {
    j["currentPaid"] = v.currentPaid; 
    j["incomingOffers"] = v.incomingOffers; 
    j["currentBid"] = v.currentBid; 
  }
  void from_json(const json& j, LolClashBiddingData& v) {
    v.currentPaid = j.at("currentPaid").get<int32_t>(); 
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
  }
}
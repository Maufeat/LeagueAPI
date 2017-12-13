#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTicketOffer.hpp>
namespace lol {
  struct LolClashBiddingData { 
    int32_t currentBid;
    std::vector<LolClashTicketOffer> incomingOffers;
    int32_t currentPaid; 
  };
  void to_json(json& j, const LolClashBiddingData& v) {
  j["currentBid"] = v.currentBid; 
  j["incomingOffers"] = v.incomingOffers; 
  j["currentPaid"] = v.currentPaid; 
  }
  void from_json(const json& j, LolClashBiddingData& v) {
  v.currentBid = j.at("currentBid").get<int32_t>(); 
  v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>(); 
  v.currentPaid = j.at("currentPaid").get<int32_t>(); 
  }
}
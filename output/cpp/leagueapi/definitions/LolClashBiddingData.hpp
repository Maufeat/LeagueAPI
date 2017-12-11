#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashTicketOffer.hpp>

namespace leagueapi {
  struct LolClashBiddingData { /**/ 
    int32_t currentBid;/**/
    std::vector<LolClashTicketOffer> incomingOffers;/**/
    int32_t currentPaid;/**/
  };
  static void to_json(json& j, const LolClashBiddingData& v) { 
    j["currentBid"] = v.currentBid;
    j["incomingOffers"] = v.incomingOffers;
    j["currentPaid"] = v.currentPaid;
  }
  static void from_json(const json& j, LolClashBiddingData& v) { 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>(); 
    v.currentPaid = j.at("currentPaid").get<int32_t>(); 
  }
} 
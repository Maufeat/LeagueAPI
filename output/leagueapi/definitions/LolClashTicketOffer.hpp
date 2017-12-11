#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashTicketOffer { /**/ 
    int32_t amount;/**/
    uint64_t summonerId;/**/
    bool isAccepted;/**/
  };
  static void to_json(json& j, const LolClashTicketOffer& v) { 
    j["amount"] = v.amount;
    j["summonerId"] = v.summonerId;
    j["isAccepted"] = v.isAccepted;
  }
  static void from_json(const json& j, LolClashTicketOffer& v) { 
    v.amount = j.at("amount").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.isAccepted = j.at("isAccepted").get<bool>(); 
  }
} 
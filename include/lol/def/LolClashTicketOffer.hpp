#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTicketOffer { 
    int32_t amount;
    bool isAccepted;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolClashTicketOffer& v) {
    j["amount"] = v.amount; 
    j["isAccepted"] = v.isAccepted; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolClashTicketOffer& v) {
    v.amount = j.at("amount").get<int32_t>(); 
    v.isAccepted = j.at("isAccepted").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
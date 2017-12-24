#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTicketOffer { 
    uint64_t summonerId;
    bool isAccepted;
    int32_t amount; 
  };
  inline void to_json(json& j, const LolClashTicketOffer& v) {
    j["summonerId"] = v.summonerId; 
    j["isAccepted"] = v.isAccepted; 
    j["amount"] = v.amount; 
  }
  inline void from_json(const json& j, LolClashTicketOffer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.isAccepted = j.at("isAccepted").get<bool>(); 
    v.amount = j.at("amount").get<int32_t>(); 
  }
}
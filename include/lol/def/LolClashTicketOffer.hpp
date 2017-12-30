#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTicketOffer { 
    bool isAccepted;
    uint64_t summonerId;
    int32_t amount; 
  };
  inline void to_json(json& j, const LolClashTicketOffer& v) {
    j["isAccepted"] = v.isAccepted; 
    j["summonerId"] = v.summonerId; 
    j["amount"] = v.amount; 
  }
  inline void from_json(const json& j, LolClashTicketOffer& v) {
    v.isAccepted = j.at("isAccepted").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.amount = j.at("amount").get<int32_t>(); 
  }
}
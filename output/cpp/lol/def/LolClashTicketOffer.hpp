#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashTicketOffer { 
    int32_t amount;
    uint64_t summonerId;
    bool isAccepted; 
  };
  void to_json(json& j, const LolClashTicketOffer& v) {
  j["amount"] = v.amount; 
  j["summonerId"] = v.summonerId; 
  j["isAccepted"] = v.isAccepted; 
  }
  void from_json(const json& j, LolClashTicketOffer& v) {
  v.amount = j.at("amount").get<int32_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.isAccepted = j.at("isAccepted").get<bool>(); 
  }
}
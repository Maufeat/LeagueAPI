#pragma once
#include "../base_def.hpp" 
#include "BuybackState.hpp"
namespace lol {
  struct BuybackMember { 
    int32_t bet;
    int32_t pay;
    BuybackState buybackState;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const BuybackMember& v) {
    j["bet"] = v.bet; 
    j["pay"] = v.pay; 
    j["buybackState"] = v.buybackState; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, BuybackMember& v) {
    v.bet = j.at("bet").get<int32_t>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.buybackState = j.at("buybackState").get<BuybackState>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
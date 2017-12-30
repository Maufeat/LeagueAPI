#pragma once
#include "../base_def.hpp" 
#include "BuybackState.hpp"
namespace lol {
  struct BuybackMember { 
    uint64_t playerId;
    BuybackState buybackState;
    int32_t bet;
    int32_t pay; 
  };
  inline void to_json(json& j, const BuybackMember& v) {
    j["playerId"] = v.playerId; 
    j["buybackState"] = v.buybackState; 
    j["bet"] = v.bet; 
    j["pay"] = v.pay; 
  }
  inline void from_json(const json& j, BuybackMember& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.buybackState = j.at("buybackState").get<BuybackState>(); 
    v.bet = j.at("bet").get<int32_t>(); 
    v.pay = j.at("pay").get<int32_t>(); 
  }
}
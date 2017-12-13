#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BuybackState.hpp>
namespace lol {
  struct BuybackMember { 
    BuybackState buybackState;
    int32_t pay;
    int32_t bet;
    uint64_t playerId; 
  };
  void to_json(json& j, const BuybackMember& v) {
  j["buybackState"] = v.buybackState; 
  j["pay"] = v.pay; 
  j["bet"] = v.bet; 
  j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, BuybackMember& v) {
  v.buybackState = j.at("buybackState").get<BuybackState>(); 
  v.pay = j.at("pay").get<int32_t>(); 
  v.bet = j.at("bet").get<int32_t>(); 
  v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
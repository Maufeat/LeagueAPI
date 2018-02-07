#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PhaseInMember { 
    uint64_t playerId;
    int32_t bet;
    int32_t pendingPay;
    int32_t selfBet; 
  };
  inline void to_json(json& j, const PhaseInMember& v) {
    j["playerId"] = v.playerId; 
    j["bet"] = v.bet; 
    j["pendingPay"] = v.pendingPay; 
    j["selfBet"] = v.selfBet; 
  }
  inline void from_json(const json& j, PhaseInMember& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.bet = j.at("bet").get<int32_t>(); 
    v.pendingPay = j.at("pendingPay").get<int32_t>(); 
    v.selfBet = j.at("selfBet").get<int32_t>(); 
  }
}
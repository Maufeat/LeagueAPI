#pragma once
#include "../base_def.hpp" 
#include "SubState.hpp"
#include "Position.hpp"
namespace lol {
  struct PhaseRosterSubDTO { 
    uint64_t playerId;
    uint64_t replacedPlayerId;
    SubState subState;
    int32_t bet;
    int32_t pay;
    Position position;
    int32_t pendingPay;
    int32_t selfBet; 
  };
  inline void to_json(json& j, const PhaseRosterSubDTO& v) {
    j["playerId"] = v.playerId; 
    j["replacedPlayerId"] = v.replacedPlayerId; 
    j["subState"] = v.subState; 
    j["bet"] = v.bet; 
    j["pay"] = v.pay; 
    j["position"] = v.position; 
    j["pendingPay"] = v.pendingPay; 
    j["selfBet"] = v.selfBet; 
  }
  inline void from_json(const json& j, PhaseRosterSubDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>(); 
    v.subState = j.at("subState").get<SubState>(); 
    v.bet = j.at("bet").get<int32_t>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.pendingPay = j.at("pendingPay").get<int32_t>(); 
    v.selfBet = j.at("selfBet").get<int32_t>(); 
  }
}
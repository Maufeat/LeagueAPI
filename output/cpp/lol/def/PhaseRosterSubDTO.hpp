#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/SubState.hpp>
#include <lol/def/Position.hpp>
namespace lol {
  struct PhaseRosterSubDTO { 
    SubState subState;
    uint64_t replacedPlayerId;
    int32_t pay;
    int32_t bet;
    Position position;
    uint64_t playerId; 
  };
  void to_json(json& j, const PhaseRosterSubDTO& v) {
  j["subState"] = v.subState; 
  j["replacedPlayerId"] = v.replacedPlayerId; 
  j["pay"] = v.pay; 
  j["bet"] = v.bet; 
  j["position"] = v.position; 
  j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, PhaseRosterSubDTO& v) {
  v.subState = j.at("subState").get<SubState>(); 
  v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>(); 
  v.pay = j.at("pay").get<int32_t>(); 
  v.bet = j.at("bet").get<int32_t>(); 
  v.position = j.at("position").get<Position>(); 
  v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
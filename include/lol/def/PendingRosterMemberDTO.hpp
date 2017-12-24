#pragma once
#include "../base_def.hpp" 
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace lol {
  struct PendingRosterMemberDTO { 
    int32_t bet;
    int32_t pay;
    PendingRosterMemberState memberState;
    int64_t joinTime;
    Position position;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const PendingRosterMemberDTO& v) {
    j["bet"] = v.bet; 
    j["pay"] = v.pay; 
    j["memberState"] = v.memberState; 
    j["joinTime"] = v.joinTime; 
    j["position"] = v.position; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, PendingRosterMemberDTO& v) {
    v.bet = j.at("bet").get<int32_t>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.memberState = j.at("memberState").get<PendingRosterMemberState>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "PendingRosterMemberState.hpp"
#include "Position.hpp"
namespace lol {
  struct PendingRosterMemberDTO { 
    PendingRosterMemberState memberState;
    int32_t pay;
    int64_t joinTime;
    int32_t bet;
    Position position;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const PendingRosterMemberDTO& v) {
    j["memberState"] = v.memberState; 
    j["pay"] = v.pay; 
    j["joinTime"] = v.joinTime; 
    j["bet"] = v.bet; 
    j["position"] = v.position; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, PendingRosterMemberDTO& v) {
    v.memberState = j.at("memberState").get<PendingRosterMemberState>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.bet = j.at("bet").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
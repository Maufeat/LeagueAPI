#pragma once
#include "../base_def.hpp" 
#include "PendingRosterMemberState.hpp"
#include "Position.hpp"
namespace lol {
  struct PendingRosterMemberDTO { 
    int32_t bet;
    int32_t pay;
    Position position;
    uint64_t playerId;
    int64_t joinTime;
    PendingRosterMemberState memberState; 
  };
  inline void to_json(json& j, const PendingRosterMemberDTO& v) {
    j["bet"] = v.bet; 
    j["pay"] = v.pay; 
    j["position"] = v.position; 
    j["playerId"] = v.playerId; 
    j["joinTime"] = v.joinTime; 
    j["memberState"] = v.memberState; 
  }
  inline void from_json(const json& j, PendingRosterMemberDTO& v) {
    v.bet = j.at("bet").get<int32_t>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.memberState = j.at("memberState").get<PendingRosterMemberState>(); 
  }
}
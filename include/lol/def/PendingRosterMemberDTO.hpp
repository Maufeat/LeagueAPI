#pragma once
#include "../base_def.hpp" 
#include "PendingRosterMemberState.hpp"
#include "Position.hpp"
namespace lol {
  struct PendingRosterMemberDTO { 
    uint64_t playerId;
    PendingRosterMemberState memberState;
    int32_t bet;
    Position position;
    int64_t joinTime;
    int32_t pendingPay;
    int32_t selfBet; 
  };
  inline void to_json(json& j, const PendingRosterMemberDTO& v) {
    j["playerId"] = v.playerId; 
    j["memberState"] = v.memberState; 
    j["bet"] = v.bet; 
    j["position"] = v.position; 
    j["joinTime"] = v.joinTime; 
    j["pendingPay"] = v.pendingPay; 
    j["selfBet"] = v.selfBet; 
  }
  inline void from_json(const json& j, PendingRosterMemberDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.memberState = j.at("memberState").get<PendingRosterMemberState>(); 
    v.bet = j.at("bet").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.pendingPay = j.at("pendingPay").get<int32_t>(); 
    v.selfBet = j.at("selfBet").get<int32_t>(); 
  }
}
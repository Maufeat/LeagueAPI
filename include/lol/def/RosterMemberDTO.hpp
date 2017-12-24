#pragma once
#include "../base_def.hpp" 
#include "Position.hpp"
namespace lol {
  struct RosterMemberDTO { 
    int64_t rosterId;
    int64_t tournamentId;
    int64_t joinTime;
    int32_t currentBid;
    Position position;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const RosterMemberDTO& v) {
    j["rosterId"] = v.rosterId; 
    j["tournamentId"] = v.tournamentId; 
    j["joinTime"] = v.joinTime; 
    j["currentBid"] = v.currentBid; 
    j["position"] = v.position; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, RosterMemberDTO& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
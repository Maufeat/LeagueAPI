#pragma once
#include "../base_def.hpp" 
#include "Position.hpp"
namespace lol {
  struct RosterMemberDTO { 
    int64_t rosterId;
    uint64_t playerId;
    int64_t tournamentId;
    int32_t currentBid;
    Position position;
    int64_t joinTime; 
  };
  inline void to_json(json& j, const RosterMemberDTO& v) {
    j["rosterId"] = v.rosterId; 
    j["playerId"] = v.playerId; 
    j["tournamentId"] = v.tournamentId; 
    j["currentBid"] = v.currentBid; 
    j["position"] = v.position; 
    j["joinTime"] = v.joinTime; 
  }
  inline void from_json(const json& j, RosterMemberDTO& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Position.hpp>
namespace lol {
  struct RosterMemberDTO { 
    int64_t tournamentId;
    int32_t currentBid;
    int64_t rosterId;
    int64_t joinTime;
    Position position;
    uint64_t playerId; 
  };
  void to_json(json& j, const RosterMemberDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["currentBid"] = v.currentBid; 
    j["rosterId"] = v.rosterId; 
    j["joinTime"] = v.joinTime; 
    j["position"] = v.position; 
    j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, RosterMemberDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
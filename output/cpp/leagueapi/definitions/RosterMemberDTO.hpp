#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/Position.hpp>

namespace leagueapi {
  struct RosterMemberDTO { /**/ 
    int64_t rosterId;/**/
    int64_t tournamentId;/**/
    int64_t joinTime;/**/
    int32_t currentBid;/**/
    uint64_t playerId;/**/
    Position position;/**/
  };
  static void to_json(json& j, const RosterMemberDTO& v) { 
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["joinTime"] = v.joinTime;
    j["currentBid"] = v.currentBid;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
  }
  static void from_json(const json& j, RosterMemberDTO& v) { 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.joinTime = j.at("joinTime").get<int64_t>(); 
    v.currentBid = j.at("currentBid").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.position = j.at("position").get<Position>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaguesLcdsTeamMemberInfoDTO { 
    uint64_t playerId;
    std::string playerName; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamMemberInfoDTO& v) {
    j["playerId"] = v.playerId; 
    j["playerName"] = v.playerName; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamMemberInfoDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.playerName = j.at("playerName").get<std::string>(); 
  }
}
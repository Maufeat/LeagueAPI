#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaguesLcdsTeamMemberInfoDTO { 
    std::string playerName;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamMemberInfoDTO& v) {
    j["playerName"] = v.playerName; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamMemberInfoDTO& v) {
    v.playerName = j.at("playerName").get<std::string>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
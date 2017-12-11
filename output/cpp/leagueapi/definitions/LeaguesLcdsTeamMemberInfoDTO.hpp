#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LeaguesLcdsTeamMemberInfoDTO { /**/ 
    std::string playerName;/**/
    uint64_t playerId;/**/
  };
  static void to_json(json& j, const LeaguesLcdsTeamMemberInfoDTO& v) { 
    j["playerName"] = v.playerName;
    j["playerId"] = v.playerId;
  }
  static void from_json(const json& j, LeaguesLcdsTeamMemberInfoDTO& v) { 
    v.playerName = j.at("playerName").get<std::string>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
} 
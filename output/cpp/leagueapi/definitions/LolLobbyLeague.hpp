#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLeague { /**/ 
    std::string leagueTier;/**/
    std::string queueType;/**/
  };
  static void to_json(json& j, const LolLobbyLeague& v) { 
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }
  static void from_json(const json& j, LolLobbyLeague& v) { 
    v.leagueTier = j.at("leagueTier").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyPositionPreferences { /**/ 
    std::string firstPreference;/**/
    std::string secondPreference;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLobbyPositionPreferences& v) { 
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLobbyPositionPreferences& v) { 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
  }
} 
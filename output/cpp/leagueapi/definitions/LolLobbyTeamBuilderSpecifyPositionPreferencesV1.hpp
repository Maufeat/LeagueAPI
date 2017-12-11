#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV1 { /**/ 
    std::string firstPreference;/**/
    std::string secondPreference;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) { 
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) { 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
  }
} 
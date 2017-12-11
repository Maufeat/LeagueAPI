#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2 { /**/ 
    std::string excludedPreference;/**/
    std::string firstPreference;/**/
    std::string secondPreference;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) { 
    j["excludedPreference"] = v.excludedPreference;
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) { 
    v.excludedPreference = j.at("excludedPreference").get<std::string>(); 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2 { 
    std::string firstPreference;
    std::string secondPreference;
    std::string excludedPreference; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    j["firstPreference"] = v.firstPreference; 
    j["secondPreference"] = v.secondPreference; 
    j["excludedPreference"] = v.excludedPreference; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
    v.excludedPreference = j.at("excludedPreference").get<std::string>(); 
  }
}
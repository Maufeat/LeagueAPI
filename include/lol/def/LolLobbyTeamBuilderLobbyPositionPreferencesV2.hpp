#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderLobbyPositionPreferencesV2 { 
    std::string excludedPreference;
    std::string secondPreference;
    std::string firstPreference; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyPositionPreferencesV2& v) {
    j["excludedPreference"] = v.excludedPreference; 
    j["secondPreference"] = v.secondPreference; 
    j["firstPreference"] = v.firstPreference; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyPositionPreferencesV2& v) {
    v.excludedPreference = j.at("excludedPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
  }
}
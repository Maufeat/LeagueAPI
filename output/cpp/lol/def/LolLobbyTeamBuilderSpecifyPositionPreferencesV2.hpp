#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2 { 
    std::string excludedPreference;
    std::string secondPreference;
    std::string firstPreference; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    j["excludedPreference"] = v.excludedPreference; 
    j["secondPreference"] = v.secondPreference; 
    j["firstPreference"] = v.firstPreference; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    v.excludedPreference = j.at("excludedPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
  }
}
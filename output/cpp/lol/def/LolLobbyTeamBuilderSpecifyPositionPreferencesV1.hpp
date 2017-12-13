#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV1 { 
    std::string secondPreference;
    std::string firstPreference; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) {
    j["secondPreference"] = v.secondPreference; 
    j["firstPreference"] = v.firstPreference; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
  }
}
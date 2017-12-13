#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderLobbyPositionPreferences { 
    std::string firstPreference;
    std::string secondPreference; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderLobbyPositionPreferences& v) {
  j["firstPreference"] = v.firstPreference; 
  j["secondPreference"] = v.secondPreference; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderLobbyPositionPreferences& v) {
  v.firstPreference = j.at("firstPreference").get<std::string>(); 
  v.secondPreference = j.at("secondPreference").get<std::string>(); 
  }
}
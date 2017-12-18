#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderLobbyPositionPreferences { 
    std::string secondPreference;
    std::string firstPreference; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    j["secondPreference"] = v.secondPreference; 
    j["firstPreference"] = v.firstPreference; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
  }
}
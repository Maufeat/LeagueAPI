#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource { 
    std::vector<std::string> enabledFeatures; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) {
  j["enabledFeatures"] = v.enabledFeatures; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) {
  v.enabledFeatures = j.at("enabledFeatures").get<std::vector<std::string>>(); 
  }
}
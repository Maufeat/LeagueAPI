#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource { /**/ 
    std::vector<std::string> enabledFeatures;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) { 
    j["enabledFeatures"] = v.enabledFeatures;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) { 
    v.enabledFeatures = j.at("enabledFeatures").get<std::vector<std::string>>(); 
  }
} 
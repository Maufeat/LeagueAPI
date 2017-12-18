#pragma once
#include "../base_def.hpp" 
#include "LolSuggestedPlayersSuggestedPlayersConfig.hpp"
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig { 
    LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
    j["SuggestedPlayers"] = v.SuggestedPlayers; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
    v.SuggestedPlayers = j.at("SuggestedPlayers").get<LolSuggestedPlayersSuggestedPlayersConfig>(); 
  }
}
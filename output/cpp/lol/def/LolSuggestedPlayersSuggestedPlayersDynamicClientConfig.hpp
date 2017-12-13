#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersConfig.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig { 
    LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
  j["SuggestedPlayers"] = v.SuggestedPlayers; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
  v.SuggestedPlayers = j.at("SuggestedPlayers").get<LolSuggestedPlayersSuggestedPlayersConfig>(); 
  }
}
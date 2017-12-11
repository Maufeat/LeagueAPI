#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSuggestedPlayersSuggestedPlayersConfig.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig { /**/ 
    LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) { 
    j["SuggestedPlayers"] = v.SuggestedPlayers;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) { 
    v.SuggestedPlayers = j.at("SuggestedPlayers").get<LolSuggestedPlayersSuggestedPlayersConfig>(); 
  }
} 
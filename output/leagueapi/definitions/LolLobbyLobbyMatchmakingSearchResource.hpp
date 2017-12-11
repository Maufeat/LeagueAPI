#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp>"
#include "<leagueapi/definitions/LolLobbyLobbyMatchmakingSearchErrorResource.hpp>"
#include "<leagueapi/definitions/LolLobbyLobbyMatchmakingSearchState.hpp>"

namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource { /**/ 
    LolLobbyLobbyMatchmakingSearchState searchState;/**/
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;/**/
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyMatchmakingSearchResource& v) { 
    j["searchState"] = v.searchState;
    j["lowPriorityData"] = v.lowPriorityData;
    j["errors"] = v.errors;
  }
  static void from_json(const json& j, LolLobbyLobbyMatchmakingSearchResource& v) { 
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>(); 
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>(); 
  }
} 
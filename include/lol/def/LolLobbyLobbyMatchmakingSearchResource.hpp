#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchResource { 
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;
    LolLobbyLobbyMatchmakingSearchState searchState; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
    j["lowPriorityData"] = v.lowPriorityData; 
    j["errors"] = v.errors; 
    j["searchState"] = v.searchState; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>(); 
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>(); 
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>(); 
  }
}
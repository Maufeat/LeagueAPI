#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchResource { 
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;
    LolLobbyLobbyMatchmakingSearchState searchState; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
    j["errors"] = v.errors; 
    j["lowPriorityData"] = v.lowPriorityData; 
    j["searchState"] = v.searchState; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>(); 
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>(); 
  }
}
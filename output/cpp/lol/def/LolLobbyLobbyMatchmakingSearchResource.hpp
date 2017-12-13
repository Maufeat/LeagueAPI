#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyMatchmakingSearchErrorResource.hpp>
#include <lol/def/LolLobbyLobbyMatchmakingSearchState.hpp>
#include <lol/def/LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp>
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchResource { 
    LolLobbyLobbyMatchmakingSearchState searchState;
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData; 
  };
  void to_json(json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
  j["searchState"] = v.searchState; 
  j["errors"] = v.errors; 
  j["lowPriorityData"] = v.lowPriorityData; 
  }
  void from_json(const json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
  v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>(); 
  v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>(); 
  v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>(); 
  }
}
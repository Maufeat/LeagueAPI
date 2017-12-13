#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp>
#include <lol/def/LolLobbyLobbyMatchmakingSearchErrorResource.hpp>
#include <lol/def/LolLobbyLobbyMatchmakingSearchState.hpp>
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchResource { 
    LolLobbyLobbyMatchmakingSearchState searchState;
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors; 
  };
  void to_json(json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
  j["searchState"] = v.searchState; 
  j["lowPriorityData"] = v.lowPriorityData; 
  j["errors"] = v.errors; 
  }
  void from_json(const json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
  v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>(); 
  v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>(); 
  v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta { 
    std::string gamePlatformId;
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["gamePlatformId"] = v.gamePlatformId; 
    j["gameId"] = v.gameId; 
    j["platformDelta"] = v.platformDelta; 
    j["leagueDelta"] = v.leagueDelta; 
    j["champMastery"] = v.champMastery; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>(); 
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>(); 
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>(); 
  }
}
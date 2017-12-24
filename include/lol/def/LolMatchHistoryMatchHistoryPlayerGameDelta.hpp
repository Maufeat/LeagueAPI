#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta { 
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    std::string gamePlatformId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["gameId"] = v.gameId; 
    j["champMastery"] = v.champMastery; 
    j["platformDelta"] = v.platformDelta; 
    j["leagueDelta"] = v.leagueDelta; 
    j["gamePlatformId"] = v.gamePlatformId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>(); 
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>(); 
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>(); 
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>(); 
  }
}
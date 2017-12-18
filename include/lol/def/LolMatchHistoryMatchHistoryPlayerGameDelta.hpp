#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta { 
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["gamePlatformId"] = v.gamePlatformId; 
    j["champMastery"] = v.champMastery; 
    j["platformDelta"] = v.platformDelta; 
    j["gameId"] = v.gameId; 
    j["leagueDelta"] = v.leagueDelta; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>(); 
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>(); 
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>(); 
  }
}
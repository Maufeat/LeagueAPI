#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta { 
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["gameId"] = v.gameId; 
    j["platformDelta"] = v.platformDelta; 
    j["gamePlatformId"] = v.gamePlatformId; 
    j["leagueDelta"] = v.leagueDelta; 
    j["champMastery"] = v.champMastery; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>(); 
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>(); 
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>(); 
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta { 
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery;
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
  j["gameId"] = v.gameId; 
  j["champMastery"] = v.champMastery; 
  j["gamePlatformId"] = v.gamePlatformId; 
  j["leagueDelta"] = v.leagueDelta; 
  j["platformDelta"] = v.platformDelta; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>(); 
  v.gamePlatformId = j.at("gamePlatformId").get<std::string>(); 
  v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>(); 
  v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>(); 
  }
}
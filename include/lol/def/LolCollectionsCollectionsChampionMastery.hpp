#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsChampionMastery { 
    int32_t championLevel;
    uint64_t lastPlayTime;
    int32_t championId;
    int32_t championPointsUntilNextLevel;
    int32_t championPoints;
    int32_t championPointsSinceLastLevel;
    bool chestGranted;
    std::string highestGrade;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsChampionMastery& v) {
    j["championLevel"] = v.championLevel; 
    j["lastPlayTime"] = v.lastPlayTime; 
    j["championId"] = v.championId; 
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel; 
    j["championPoints"] = v.championPoints; 
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel; 
    j["chestGranted"] = v.chestGranted; 
    j["highestGrade"] = v.highestGrade; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsChampionMastery& v) {
    v.championLevel = j.at("championLevel").get<int32_t>(); 
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>(); 
    v.championPoints = j.at("championPoints").get<int32_t>(); 
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>(); 
    v.chestGranted = j.at("chestGranted").get<bool>(); 
    v.highestGrade = j.at("highestGrade").get<std::string>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}
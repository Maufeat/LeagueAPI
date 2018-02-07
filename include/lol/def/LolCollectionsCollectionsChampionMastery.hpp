#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsChampionMastery { 
    uint64_t playerId;
    int32_t championId;
    int32_t championLevel;
    int32_t championPoints;
    uint64_t lastPlayTime;
    int32_t championPointsSinceLastLevel;
    int32_t championPointsUntilNextLevel;
    bool chestGranted;
    std::string highestGrade; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsChampionMastery& v) {
    j["playerId"] = v.playerId; 
    j["championId"] = v.championId; 
    j["championLevel"] = v.championLevel; 
    j["championPoints"] = v.championPoints; 
    j["lastPlayTime"] = v.lastPlayTime; 
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel; 
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel; 
    j["chestGranted"] = v.chestGranted; 
    j["highestGrade"] = v.highestGrade; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsChampionMastery& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championLevel = j.at("championLevel").get<int32_t>(); 
    v.championPoints = j.at("championPoints").get<int32_t>(); 
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>(); 
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>(); 
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>(); 
    v.chestGranted = j.at("chestGranted").get<bool>(); 
    v.highestGrade = j.at("highestGrade").get<std::string>(); 
  }
}
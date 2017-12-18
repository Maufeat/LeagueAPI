#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsChampionMastery { 
    std::string highestGrade;
    int32_t championPointsUntilNextLevel;
    int32_t championPoints;
    bool chestGranted;
    int32_t championPointsSinceLastLevel;
    uint64_t playerId;
    uint64_t lastPlayTime;
    int32_t championId;
    int32_t championLevel; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsChampionMastery& v) {
    j["highestGrade"] = v.highestGrade; 
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel; 
    j["championPoints"] = v.championPoints; 
    j["chestGranted"] = v.chestGranted; 
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel; 
    j["playerId"] = v.playerId; 
    j["lastPlayTime"] = v.lastPlayTime; 
    j["championId"] = v.championId; 
    j["championLevel"] = v.championLevel; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsChampionMastery& v) {
    v.highestGrade = j.at("highestGrade").get<std::string>(); 
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>(); 
    v.championPoints = j.at("championPoints").get<int32_t>(); 
    v.chestGranted = j.at("chestGranted").get<bool>(); 
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championLevel = j.at("championLevel").get<int32_t>(); 
  }
}
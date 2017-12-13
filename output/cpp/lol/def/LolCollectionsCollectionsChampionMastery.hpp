#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsChampionMastery { 
    uint64_t lastPlayTime;
    uint64_t playerId;
    bool chestGranted;
    int32_t championPointsUntilNextLevel;
    int32_t championPointsSinceLastLevel;
    int32_t championLevel;
    int32_t championPoints;
    int32_t championId;
    std::string highestGrade; 
  };
  void to_json(json& j, const LolCollectionsCollectionsChampionMastery& v) {
  j["lastPlayTime"] = v.lastPlayTime; 
  j["playerId"] = v.playerId; 
  j["chestGranted"] = v.chestGranted; 
  j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel; 
  j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel; 
  j["championLevel"] = v.championLevel; 
  j["championPoints"] = v.championPoints; 
  j["championId"] = v.championId; 
  j["highestGrade"] = v.highestGrade; 
  }
  void from_json(const json& j, LolCollectionsCollectionsChampionMastery& v) {
  v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>(); 
  v.playerId = j.at("playerId").get<uint64_t>(); 
  v.chestGranted = j.at("chestGranted").get<bool>(); 
  v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>(); 
  v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>(); 
  v.championLevel = j.at("championLevel").get<int32_t>(); 
  v.championPoints = j.at("championPoints").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.highestGrade = j.at("highestGrade").get<std::string>(); 
  }
}
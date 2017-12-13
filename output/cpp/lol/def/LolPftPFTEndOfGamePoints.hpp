#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTEndOfGamePoints { 
    int32_t pointsUntilNextReroll;
    int32_t totalPoints;
    int32_t pointChangeFromGameplay;
    int32_t previousPoints;
    int32_t pointsUsed;
    int32_t pointChangeFromChampionsOwned;
    int32_t rerollCount; 
  };
  void to_json(json& j, const LolPftPFTEndOfGamePoints& v) {
  j["pointsUntilNextReroll"] = v.pointsUntilNextReroll; 
  j["totalPoints"] = v.totalPoints; 
  j["pointChangeFromGameplay"] = v.pointChangeFromGameplay; 
  j["previousPoints"] = v.previousPoints; 
  j["pointsUsed"] = v.pointsUsed; 
  j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned; 
  j["rerollCount"] = v.rerollCount; 
  }
  void from_json(const json& j, LolPftPFTEndOfGamePoints& v) {
  v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int32_t>(); 
  v.totalPoints = j.at("totalPoints").get<int32_t>(); 
  v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>(); 
  v.previousPoints = j.at("previousPoints").get<int32_t>(); 
  v.pointsUsed = j.at("pointsUsed").get<int32_t>(); 
  v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>(); 
  v.rerollCount = j.at("rerollCount").get<int32_t>(); 
  }
}
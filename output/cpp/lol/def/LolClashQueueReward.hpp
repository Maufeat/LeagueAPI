#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashQueueReward { 
    bool isIpEnabled;
    std::vector<int32_t> partySizeIpRewards;
    bool isXpEnabled;
    bool isChampionPointsEnabled; 
  };
  void to_json(json& j, const LolClashQueueReward& v) {
  j["isIpEnabled"] = v.isIpEnabled; 
  j["partySizeIpRewards"] = v.partySizeIpRewards; 
  j["isXpEnabled"] = v.isXpEnabled; 
  j["isChampionPointsEnabled"] = v.isChampionPointsEnabled; 
  }
  void from_json(const json& j, LolClashQueueReward& v) {
  v.isIpEnabled = j.at("isIpEnabled").get<bool>(); 
  v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>(); 
  v.isXpEnabled = j.at("isXpEnabled").get<bool>(); 
  v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>(); 
  }
}
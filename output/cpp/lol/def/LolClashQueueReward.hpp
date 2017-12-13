#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashQueueReward { 
    bool isXpEnabled;
    std::vector<int32_t> partySizeIpRewards;
    bool isChampionPointsEnabled;
    bool isIpEnabled; 
  };
  void to_json(json& j, const LolClashQueueReward& v) {
    j["isXpEnabled"] = v.isXpEnabled; 
    j["partySizeIpRewards"] = v.partySizeIpRewards; 
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled; 
    j["isIpEnabled"] = v.isIpEnabled; 
  }
  void from_json(const json& j, LolClashQueueReward& v) {
    v.isXpEnabled = j.at("isXpEnabled").get<bool>(); 
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>(); 
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>(); 
    v.isIpEnabled = j.at("isIpEnabled").get<bool>(); 
  }
}
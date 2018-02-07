#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashQueueReward { 
    bool isIpEnabled;
    bool isXpEnabled;
    bool isChampionPointsEnabled;
    std::vector<int32_t> partySizeIpRewards; 
  };
  inline void to_json(json& j, const LolClashQueueReward& v) {
    j["isIpEnabled"] = v.isIpEnabled; 
    j["isXpEnabled"] = v.isXpEnabled; 
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled; 
    j["partySizeIpRewards"] = v.partySizeIpRewards; 
  }
  inline void from_json(const json& j, LolClashQueueReward& v) {
    v.isIpEnabled = j.at("isIpEnabled").get<bool>(); 
    v.isXpEnabled = j.at("isXpEnabled").get<bool>(); 
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>(); 
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>(); 
  }
}
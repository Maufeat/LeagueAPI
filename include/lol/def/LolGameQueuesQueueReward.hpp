#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameQueuesQueueReward { 
    bool isXpEnabled;
    bool isChampionPointsEnabled;
    bool isIpEnabled;
    std::vector<int32_t> partySizeIpRewards; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueReward& v) {
    j["isXpEnabled"] = v.isXpEnabled; 
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled; 
    j["isIpEnabled"] = v.isIpEnabled; 
    j["partySizeIpRewards"] = v.partySizeIpRewards; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueReward& v) {
    v.isXpEnabled = j.at("isXpEnabled").get<bool>(); 
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>(); 
    v.isIpEnabled = j.at("isIpEnabled").get<bool>(); 
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>(); 
  }
}
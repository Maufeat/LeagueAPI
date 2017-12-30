#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowQueueReward { 
    std::vector<int32_t> partySizeIpRewards;
    bool isChampionPointsEnabled;
    bool isIpEnabled;
    bool isXpEnabled; 
  };
  inline void to_json(json& j, const LolGameflowQueueReward& v) {
    j["partySizeIpRewards"] = v.partySizeIpRewards; 
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled; 
    j["isIpEnabled"] = v.isIpEnabled; 
    j["isXpEnabled"] = v.isXpEnabled; 
  }
  inline void from_json(const json& j, LolGameflowQueueReward& v) {
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>(); 
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>(); 
    v.isIpEnabled = j.at("isIpEnabled").get<bool>(); 
    v.isXpEnabled = j.at("isXpEnabled").get<bool>(); 
  }
}
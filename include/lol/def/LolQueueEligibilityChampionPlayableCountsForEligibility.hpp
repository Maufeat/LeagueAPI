#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilityChampionPlayableCountsForEligibility { 
    uint32_t championsRented;
    uint32_t championsFreeToPlayReward;
    uint32_t championsFreeToPlay;
    uint32_t championsOwned; 
  };
  inline void to_json(json& j, const LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    j["championsRented"] = v.championsRented; 
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward; 
    j["championsFreeToPlay"] = v.championsFreeToPlay; 
    j["championsOwned"] = v.championsOwned; 
  }
  inline void from_json(const json& j, LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    v.championsRented = j.at("championsRented").get<uint32_t>(); 
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>(); 
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>(); 
    v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
  }
}
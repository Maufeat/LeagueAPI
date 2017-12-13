#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilityChampionPlayableCountsForEligibility { 
    uint32_t championsOwned;
    uint32_t championsRented;
    uint32_t championsFreeToPlay;
    uint32_t championsFreeToPlayReward; 
  };
  void to_json(json& j, const LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
  j["championsOwned"] = v.championsOwned; 
  j["championsRented"] = v.championsRented; 
  j["championsFreeToPlay"] = v.championsFreeToPlay; 
  j["championsFreeToPlayReward"] = v.championsFreeToPlayReward; 
  }
  void from_json(const json& j, LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
  v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
  v.championsRented = j.at("championsRented").get<uint32_t>(); 
  v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>(); 
  v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>(); 
  }
}
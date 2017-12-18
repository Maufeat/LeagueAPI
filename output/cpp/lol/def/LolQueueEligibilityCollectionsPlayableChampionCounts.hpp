#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilityCollectionsPlayableChampionCounts { 
    uint32_t championsOwned; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsPlayableChampionCounts& v) {
    j["championsOwned"] = v.championsOwned; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsPlayableChampionCounts& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
  }
}
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolQueueEligibilityCollectionsPlayableChampionCounts { /**/ 
    uint32_t championsOwned;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityCollectionsPlayableChampionCounts& v) { 
    j["championsOwned"] = v.championsOwned;
  }
  static void from_json(const json& j, LolQueueEligibilityCollectionsPlayableChampionCounts& v) { 
    v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsMastery { /**/ 
    int32_t rank;/**/
    uint32_t id;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsMastery& v) { 
    j["rank"] = v.rank;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolCollectionsCollectionsMastery& v) { 
    v.rank = j.at("rank").get<int32_t>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct CollectionsLcdsTalentEntry { /**/ 
    int32_t rank;/**/
    int32_t talentId;/**/
  };
  static void to_json(json& j, const CollectionsLcdsTalentEntry& v) { 
    j["rank"] = v.rank;
    j["talentId"] = v.talentId;
  }
  static void from_json(const json& j, CollectionsLcdsTalentEntry& v) { 
    v.rank = j.at("rank").get<int32_t>(); 
    v.talentId = j.at("talentId").get<int32_t>(); 
  }
} 
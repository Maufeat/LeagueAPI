#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersQueue { /**/ 
    uint32_t minLevel;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersQueue& v) { 
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersQueue& v) { 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashSuggestedInvite { /**/ 
    uint64_t summonerId;/**/
    uint64_t suggesterSummonerId;/**/
  };
  static void to_json(json& j, const LolClashSuggestedInvite& v) { 
    j["summonerId"] = v.summonerId;
    j["suggesterSummonerId"] = v.suggesterSummonerId;
  }
  static void from_json(const json& j, LolClashSuggestedInvite& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>(); 
  }
} 
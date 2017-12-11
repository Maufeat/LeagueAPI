#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLeaguesLeaguesSummoner { /**/ 
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolLeaguesLeaguesSummoner& v) { 
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolLeaguesLeaguesSummoner& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 
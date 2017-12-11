#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderSummonerResource { /**/ 
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const RecofrienderSummonerResource& v) { 
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, RecofrienderSummonerResource& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 
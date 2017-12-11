#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsLoginSession { /**/ 
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const LolMissionsLoginSession& v) { 
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, LolMissionsLoginSession& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 
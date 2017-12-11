#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerSummonerIdAndName { /**/ 
    uint64_t summonerId;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolSummonerSummonerIdAndName& v) { 
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolSummonerSummonerIdAndName& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsPlayer { /**/ 
    std::string summonerName;/**/
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LcdsPlayer& v) { 
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LcdsPlayer& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubPlayer { /**/ 
    std::string summonerName;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    int32_t summonerIconId;/**/
  };
  static void to_json(json& j, const ClubPlayer& v) { 
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
  }
  static void from_json(const json& j, ClubPlayer& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
} 
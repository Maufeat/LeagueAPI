#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RosterItemDto { /**/ 
    std::string summonerName;/**/
    std::string clubRole;/**/
    uint64_t accountId;/**/
    int32_t summonerIconId;/**/
  };
  static void to_json(json& j, const RosterItemDto& v) { 
    j["summonerName"] = v.summonerName;
    j["clubRole"] = v.clubRole;
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
  }
  static void from_json(const json& j, RosterItemDto& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.clubRole = j.at("clubRole").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
} 
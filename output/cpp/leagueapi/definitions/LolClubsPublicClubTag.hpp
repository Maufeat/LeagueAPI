#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClubsPublicClubTag { /**/ 
    uint64_t summonerId;/**/
    std::string clubTag;/**/
    std::string clubName;/**/
  };
  static void to_json(json& j, const LolClubsPublicClubTag& v) { 
    j["summonerId"] = v.summonerId;
    j["clubTag"] = v.clubTag;
    j["clubName"] = v.clubName;
  }
  static void from_json(const json& j, LolClubsPublicClubTag& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.clubTag = j.at("clubTag").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
  }
} 
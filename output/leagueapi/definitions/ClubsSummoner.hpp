#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubsSummoner { /**/ 
    int32_t profileIconId;/**/
    uint64_t summonerId;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const ClubsSummoner& v) { 
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, ClubsSummoner& v) { 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 
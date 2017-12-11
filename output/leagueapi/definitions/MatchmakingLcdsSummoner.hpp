#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MatchmakingLcdsSummoner { /**/ 
    std::string name;/**/
    uint64_t sumId;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsSummoner& v) { 
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }
  static void from_json(const json& j, MatchmakingLcdsSummoner& v) { 
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
} 
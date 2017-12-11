#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLeaguesQueue { /**/ 
    json type;/**/
  };
  static void to_json(json& j, const LolLeaguesQueue& v) { 
    j["type"] = v.type;
  }
  static void from_json(const json& j, LolLeaguesQueue& v) { 
    v.type = j.at("type").get<json>(); 
  }
} 
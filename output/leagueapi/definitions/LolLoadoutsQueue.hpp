#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoadoutsQueue { /**/ 
    bool isTeamBuilderManaged;/**/
  };
  static void to_json(json& j, const LolLoadoutsQueue& v) { 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }
  static void from_json(const json& j, LolLoadoutsQueue& v) { 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
} 
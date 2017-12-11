#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LeaguesLcdsTeamIdDTO { /**/ 
    std::string fullId;/**/
  };
  static void to_json(json& j, const LeaguesLcdsTeamIdDTO& v) { 
    j["fullId"] = v.fullId;
  }
  static void from_json(const json& j, LeaguesLcdsTeamIdDTO& v) { 
    v.fullId = j.at("fullId").get<std::string>(); 
  }
} 
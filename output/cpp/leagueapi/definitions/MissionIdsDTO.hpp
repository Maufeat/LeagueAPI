#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MissionIdsDTO { /**/ 
    std::vector<std::string> missionIds;/**/
  };
  static void to_json(json& j, const MissionIdsDTO& v) { 
    j["missionIds"] = v.missionIds;
  }
  static void from_json(const json& j, MissionIdsDTO& v) { 
    v.missionIds = j.at("missionIds").get<std::vector<std::string>>(); 
  }
} 
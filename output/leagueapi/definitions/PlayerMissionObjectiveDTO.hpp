#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MissionProgressDTO.hpp>"

namespace leagueapi {
  struct PlayerMissionObjectiveDTO { /**/ 
    std::string type;/**/
    int32_t sequence;/**/
    MissionProgressDTO progress;/**/
    std::string description;/**/
  };
  static void to_json(json& j, const PlayerMissionObjectiveDTO& v) { 
    j["type"] = v.type;
    j["sequence"] = v.sequence;
    j["progress"] = v.progress;
    j["description"] = v.description;
  }
  static void from_json(const json& j, PlayerMissionObjectiveDTO& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.sequence = j.at("sequence").get<int32_t>(); 
    v.progress = j.at("progress").get<MissionProgressDTO>(); 
    v.description = j.at("description").get<std::string>(); 
  }
} 
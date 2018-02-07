#pragma once
#include "../base_def.hpp" 
#include "MissionProgressDTO.hpp"
namespace lol {
  struct PlayerMissionObjectiveDTO { 
    std::string type;
    std::string description;
    MissionProgressDTO progress;
    int32_t sequence; 
  };
  inline void to_json(json& j, const PlayerMissionObjectiveDTO& v) {
    j["type"] = v.type; 
    j["description"] = v.description; 
    j["progress"] = v.progress; 
    j["sequence"] = v.sequence; 
  }
  inline void from_json(const json& j, PlayerMissionObjectiveDTO& v) {
    v.type = j.at("type").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.progress = j.at("progress").get<MissionProgressDTO>(); 
    v.sequence = j.at("sequence").get<int32_t>(); 
  }
}
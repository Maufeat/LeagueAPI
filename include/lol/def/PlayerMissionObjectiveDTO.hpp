#pragma once
#include "../base_def.hpp" 
#include "MissionProgressDTO.hpp"
namespace lol {
  struct PlayerMissionObjectiveDTO { 
    std::string description;
    std::string type;
    MissionProgressDTO progress;
    int32_t sequence; 
  };
  inline void to_json(json& j, const PlayerMissionObjectiveDTO& v) {
    j["description"] = v.description; 
    j["type"] = v.type; 
    j["progress"] = v.progress; 
    j["sequence"] = v.sequence; 
  }
  inline void from_json(const json& j, PlayerMissionObjectiveDTO& v) {
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.progress = j.at("progress").get<MissionProgressDTO>(); 
    v.sequence = j.at("sequence").get<int32_t>(); 
  }
}
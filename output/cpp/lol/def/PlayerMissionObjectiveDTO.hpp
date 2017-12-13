#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MissionProgressDTO.hpp>
namespace lol {
  struct PlayerMissionObjectiveDTO { 
    std::string description;
    std::string type;
    int32_t sequence;
    MissionProgressDTO progress; 
  };
  void to_json(json& j, const PlayerMissionObjectiveDTO& v) {
    j["description"] = v.description; 
    j["type"] = v.type; 
    j["sequence"] = v.sequence; 
    j["progress"] = v.progress; 
  }
  void from_json(const json& j, PlayerMissionObjectiveDTO& v) {
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.sequence = j.at("sequence").get<int32_t>(); 
    v.progress = j.at("progress").get<MissionProgressDTO>(); 
  }
}
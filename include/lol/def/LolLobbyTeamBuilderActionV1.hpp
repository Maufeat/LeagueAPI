#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderActionV1 { 
    int64_t duration;
    int32_t championId;
    int32_t actionId;
    int32_t actorCellId;
    std::string type;
    bool completed; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderActionV1& v) {
    j["duration"] = v.duration; 
    j["championId"] = v.championId; 
    j["actionId"] = v.actionId; 
    j["actorCellId"] = v.actorCellId; 
    j["type"] = v.type; 
    j["completed"] = v.completed; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderActionV1& v) {
    v.duration = j.at("duration").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.actionId = j.at("actionId").get<int32_t>(); 
    v.actorCellId = j.at("actorCellId").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.completed = j.at("completed").get<bool>(); 
  }
}
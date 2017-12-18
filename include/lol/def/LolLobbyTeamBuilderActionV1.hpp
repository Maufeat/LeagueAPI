#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderActionV1 { 
    bool completed;
    std::string type;
    int64_t duration;
    int32_t actorCellId;
    int32_t actionId;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderActionV1& v) {
    j["completed"] = v.completed; 
    j["type"] = v.type; 
    j["duration"] = v.duration; 
    j["actorCellId"] = v.actorCellId; 
    j["actionId"] = v.actionId; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderActionV1& v) {
    v.completed = j.at("completed").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.duration = j.at("duration").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int32_t>(); 
    v.actionId = j.at("actionId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
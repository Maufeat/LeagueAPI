#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderActionV1 { 
    int64_t duration;
    int32_t actorCellId;
    bool completed;
    std::string type;
    int32_t championId;
    int32_t actionId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderActionV1& v) {
    j["duration"] = v.duration; 
    j["actorCellId"] = v.actorCellId; 
    j["completed"] = v.completed; 
    j["type"] = v.type; 
    j["championId"] = v.championId; 
    j["actionId"] = v.actionId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderActionV1& v) {
    v.duration = j.at("duration").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int32_t>(); 
    v.completed = j.at("completed").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.actionId = j.at("actionId").get<int32_t>(); 
  }
}
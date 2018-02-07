#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderActionV1 { 
    int32_t actionId;
    int32_t actorCellId;
    std::string type;
    int32_t championId;
    bool completed;
    int64_t duration; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderActionV1& v) {
    j["actionId"] = v.actionId; 
    j["actorCellId"] = v.actorCellId; 
    j["type"] = v.type; 
    j["championId"] = v.championId; 
    j["completed"] = v.completed; 
    j["duration"] = v.duration; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderActionV1& v) {
    v.actionId = j.at("actionId").get<int32_t>(); 
    v.actorCellId = j.at("actorCellId").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.completed = j.at("completed").get<bool>(); 
    v.duration = j.at("duration").get<int64_t>(); 
  }
}
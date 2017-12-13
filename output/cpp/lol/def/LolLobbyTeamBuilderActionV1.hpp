#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderActionV1 { 
    int64_t duration;
    std::string type;
    int32_t actionId;
    bool completed;
    int32_t actorCellId;
    int32_t championId; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderActionV1& v) {
  j["duration"] = v.duration; 
  j["type"] = v.type; 
  j["actionId"] = v.actionId; 
  j["completed"] = v.completed; 
  j["actorCellId"] = v.actorCellId; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderActionV1& v) {
  v.duration = j.at("duration").get<int64_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.actionId = j.at("actionId").get<int32_t>(); 
  v.completed = j.at("completed").get<bool>(); 
  v.actorCellId = j.at("actorCellId").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}
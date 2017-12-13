#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectAction { 
    std::string type;
    int64_t actorCellId;
    bool completed;
    int64_t id;
    int32_t championId; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectAction& v) {
  j["type"] = v.type; 
  j["actorCellId"] = v.actorCellId; 
  j["completed"] = v.completed; 
  j["id"] = v.id; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectAction& v) {
  v.type = j.at("type").get<std::string>(); 
  v.actorCellId = j.at("actorCellId").get<int64_t>(); 
  v.completed = j.at("completed").get<bool>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}
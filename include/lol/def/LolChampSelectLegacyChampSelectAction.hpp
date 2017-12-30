#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectAction { 
    int64_t id;
    int64_t actorCellId;
    bool completed;
    std::string type;
    int32_t pickTurn;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectAction& v) {
    j["id"] = v.id; 
    j["actorCellId"] = v.actorCellId; 
    j["completed"] = v.completed; 
    j["type"] = v.type; 
    j["pickTurn"] = v.pickTurn; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectAction& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.completed = j.at("completed").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
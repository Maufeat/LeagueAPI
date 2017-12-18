#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectAction { 
    bool completed;
    int32_t pickTurn;
    std::string type;
    int64_t actorCellId;
    int32_t championId;
    int64_t id; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectAction& v) {
    j["completed"] = v.completed; 
    j["pickTurn"] = v.pickTurn; 
    j["type"] = v.type; 
    j["actorCellId"] = v.actorCellId; 
    j["championId"] = v.championId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectAction& v) {
    v.completed = j.at("completed").get<bool>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}
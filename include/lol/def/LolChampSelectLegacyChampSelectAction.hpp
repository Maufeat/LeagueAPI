#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectAction { 
    int64_t id;
    int64_t actorCellId;
    int32_t championId;
    std::string type;
    bool completed;
    int32_t pickTurn; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectAction& v) {
    j["id"] = v.id; 
    j["actorCellId"] = v.actorCellId; 
    j["championId"] = v.championId; 
    j["type"] = v.type; 
    j["completed"] = v.completed; 
    j["pickTurn"] = v.pickTurn; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectAction& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.completed = j.at("completed").get<bool>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  }
}
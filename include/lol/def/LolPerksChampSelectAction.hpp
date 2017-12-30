#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectAction { 
    bool completed;
    std::string type;
    int64_t id;
    int64_t actorCellId;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolPerksChampSelectAction& v) {
    j["completed"] = v.completed; 
    j["type"] = v.type; 
    j["id"] = v.id; 
    j["actorCellId"] = v.actorCellId; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolPerksChampSelectAction& v) {
    v.completed = j.at("completed").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
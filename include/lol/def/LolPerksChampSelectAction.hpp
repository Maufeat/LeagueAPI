#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectAction { 
    int64_t id;
    int64_t actorCellId;
    std::string type;
    int32_t championId;
    bool completed; 
  };
  inline void to_json(json& j, const LolPerksChampSelectAction& v) {
    j["id"] = v.id; 
    j["actorCellId"] = v.actorCellId; 
    j["type"] = v.type; 
    j["championId"] = v.championId; 
    j["completed"] = v.completed; 
  }
  inline void from_json(const json& j, LolPerksChampSelectAction& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.completed = j.at("completed").get<bool>(); 
  }
}
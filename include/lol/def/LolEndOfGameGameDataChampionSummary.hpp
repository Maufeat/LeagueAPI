#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameGameDataChampionSummary { 
    std::string alias;
    int32_t id; 
  };
  inline void to_json(json& j, const LolEndOfGameGameDataChampionSummary& v) {
    j["alias"] = v.alias; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolEndOfGameGameDataChampionSummary& v) {
    v.alias = j.at("alias").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}
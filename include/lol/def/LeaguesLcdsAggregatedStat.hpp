#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaguesLcdsAggregatedStat { 
    uint64_t id;
    float value;
    std::string statType;
    int32_t championId; 
  };
  inline void to_json(json& j, const LeaguesLcdsAggregatedStat& v) {
    j["id"] = v.id; 
    j["value"] = v.value; 
    j["statType"] = v.statType; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LeaguesLcdsAggregatedStat& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.value = j.at("value").get<float>(); 
    v.statType = j.at("statType").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
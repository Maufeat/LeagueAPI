#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaguesLcdsAggregatedStat { 
    std::string statType;
    float value;
    int32_t championId;
    uint64_t id; 
  };
  void to_json(json& j, const LeaguesLcdsAggregatedStat& v) {
    j["statType"] = v.statType; 
    j["value"] = v.value; 
    j["championId"] = v.championId; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LeaguesLcdsAggregatedStat& v) {
    v.statType = j.at("statType").get<std::string>(); 
    v.value = j.at("value").get<float>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaguesLcdsAggregatedStat { 
    float value;
    uint64_t id;
    int32_t championId;
    std::string statType; 
  };
  void to_json(json& j, const LeaguesLcdsAggregatedStat& v) {
  j["value"] = v.value; 
  j["id"] = v.id; 
  j["championId"] = v.championId; 
  j["statType"] = v.statType; 
  }
  void from_json(const json& j, LeaguesLcdsAggregatedStat& v) {
  v.value = j.at("value").get<float>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.statType = j.at("statType").get<std::string>(); 
  }
}
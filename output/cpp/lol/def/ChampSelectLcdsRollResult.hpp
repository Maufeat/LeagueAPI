#pragma once
#include "../base_def.hpp" 
#include "ChampSelectLcdsPointSummary.hpp"
namespace lol {
  struct ChampSelectLcdsRollResult { 
    ChampSelectLcdsPointSummary pointSummary;
    int32_t championId; 
  };
  inline void to_json(json& j, const ChampSelectLcdsRollResult& v) {
    j["pointSummary"] = v.pointSummary; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, ChampSelectLcdsRollResult& v) {
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
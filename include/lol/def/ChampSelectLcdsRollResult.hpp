#pragma once
#include "../base_def.hpp" 
#include "ChampSelectLcdsPointSummary.hpp"
namespace lol {
  struct ChampSelectLcdsRollResult { 
    int32_t championId;
    ChampSelectLcdsPointSummary pointSummary; 
  };
  inline void to_json(json& j, const ChampSelectLcdsRollResult& v) {
    j["championId"] = v.championId; 
    j["pointSummary"] = v.pointSummary; 
  }
  inline void from_json(const json& j, ChampSelectLcdsRollResult& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>(); 
  }
}
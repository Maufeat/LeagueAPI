#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ChampSelectLcdsPointSummary.hpp>
namespace lol {
  struct ChampSelectLcdsRollResult { 
    ChampSelectLcdsPointSummary pointSummary;
    int32_t championId; 
  };
  void to_json(json& j, const ChampSelectLcdsRollResult& v) {
  j["pointSummary"] = v.pointSummary; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, ChampSelectLcdsRollResult& v) {
  v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}
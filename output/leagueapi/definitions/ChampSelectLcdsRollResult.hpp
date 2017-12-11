#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ChampSelectLcdsPointSummary.hpp>"

namespace leagueapi {
  struct ChampSelectLcdsRollResult { /**/ 
    ChampSelectLcdsPointSummary pointSummary;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsRollResult& v) { 
    j["pointSummary"] = v.pointSummary;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, ChampSelectLcdsRollResult& v) { 
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 
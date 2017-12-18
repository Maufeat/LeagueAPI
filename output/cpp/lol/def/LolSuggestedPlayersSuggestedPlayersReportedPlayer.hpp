#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersReportedPlayer { 
    uint64_t reportedSummonerId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) {
    j["reportedSummonerId"] = v.reportedSummonerId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) {
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
  }
}
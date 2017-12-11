#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersReportedPlayer { /**/ 
    uint64_t reportedSummonerId;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) { 
    j["reportedSummonerId"] = v.reportedSummonerId;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) { 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RewardDetails { /**/ 
    std::vector<int64_t> teamMemberIds;/**/
    int64_t rosterId;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const RewardDetails& v) { 
    j["teamMemberIds"] = v.teamMemberIds;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, RewardDetails& v) { 
    v.teamMemberIds = j.at("teamMemberIds").get<std::vector<int64_t>>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 
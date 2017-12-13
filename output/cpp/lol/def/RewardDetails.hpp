#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RewardDetails { 
    int64_t rosterId;
    int64_t tournamentId;
    std::vector<int64_t> teamMemberIds; 
  };
  void to_json(json& j, const RewardDetails& v) {
    j["rosterId"] = v.rosterId; 
    j["tournamentId"] = v.tournamentId; 
    j["teamMemberIds"] = v.teamMemberIds; 
  }
  void from_json(const json& j, RewardDetails& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.teamMemberIds = j.at("teamMemberIds").get<std::vector<int64_t>>(); 
  }
}
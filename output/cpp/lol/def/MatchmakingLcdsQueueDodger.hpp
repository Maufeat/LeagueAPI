#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsQueueDodger { 
    std::string reasonFailed;
    MatchmakingLcdsSummoner summoner;
    uint64_t dodgePenaltyRemainingTime; 
  };
  void to_json(json& j, const MatchmakingLcdsQueueDodger& v) {
  j["reasonFailed"] = v.reasonFailed; 
  j["summoner"] = v.summoner; 
  j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime; 
  }
  void from_json(const json& j, MatchmakingLcdsQueueDodger& v) {
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>(); 
  }
}
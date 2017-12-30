#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsQueueDodger { 
    MatchmakingLcdsSummoner summoner;
    uint64_t dodgePenaltyRemainingTime;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueDodger& v) {
    j["summoner"] = v.summoner; 
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueDodger& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}
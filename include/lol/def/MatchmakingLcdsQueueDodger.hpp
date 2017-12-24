#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsQueueDodger { 
    uint64_t dodgePenaltyRemainingTime;
    MatchmakingLcdsSummoner summoner;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueDodger& v) {
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime; 
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueDodger& v) {
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>(); 
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}
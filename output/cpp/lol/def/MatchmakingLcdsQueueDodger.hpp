#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsQueueDodger { 
    MatchmakingLcdsSummoner summoner;
    std::string reasonFailed;
    uint64_t dodgePenaltyRemainingTime; 
  };
  void to_json(json& j, const MatchmakingLcdsQueueDodger& v) {
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime; 
  }
  void from_json(const json& j, MatchmakingLcdsQueueDodger& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>(); 
  }
}
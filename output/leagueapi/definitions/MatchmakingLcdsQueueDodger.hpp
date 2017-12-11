#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MatchmakingLcdsSummoner.hpp>"

namespace leagueapi {
  struct MatchmakingLcdsQueueDodger { /**/ 
    std::string reasonFailed;/**/
    MatchmakingLcdsSummoner summoner;/**/
    uint64_t dodgePenaltyRemainingTime;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsQueueDodger& v) { 
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime;
  }
  static void from_json(const json& j, MatchmakingLcdsQueueDodger& v) { 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MatchmakingLcdsSummoner.hpp>

namespace leagueapi {
  struct MatchmakingLcdsFailedJoinPlayer { /**/ 
    std::string reasonFailed;/**/
    MatchmakingLcdsSummoner summoner;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsFailedJoinPlayer& v) { 
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, MatchmakingLcdsFailedJoinPlayer& v) { 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  }
} 
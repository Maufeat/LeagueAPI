#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MatchmakingLcdsSummoner.hpp>"

namespace leagueapi {
  struct MatchmakingLcdsQueueRestricted { /**/ 
    int32_t queueId;/**/
    std::string message;/**/
    std::string reasonFailed;/**/
    MatchmakingLcdsSummoner summoner;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsQueueRestricted& v) { 
    j["queueId"] = v.queueId;
    j["message"] = v.message;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, MatchmakingLcdsQueueRestricted& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.message = j.at("message").get<std::string>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  }
} 
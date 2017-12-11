#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolSummonerAutoFillQueueDto.hpp>"

namespace leagueapi {
  struct LolSummonerAutoFillDto { /**/ 
    std::vector<LolSummonerAutoFillQueueDto> autoFillQueues;/**/
  };
  static void to_json(json& j, const LolSummonerAutoFillDto& v) { 
    j["autoFillQueues"] = v.autoFillQueues;
  }
  static void from_json(const json& j, LolSummonerAutoFillDto& v) { 
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolSummonerAutoFillQueueDto>>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyAutoFillQueueDto.hpp>

namespace leagueapi {
  struct LolLobbyAutoFillDto { /**/ 
    std::vector<LolLobbyAutoFillQueueDto> autoFillQueues;/**/
  };
  static void to_json(json& j, const LolLobbyAutoFillDto& v) { 
    j["autoFillQueues"] = v.autoFillQueues;
  }
  static void from_json(const json& j, LolLobbyAutoFillDto& v) { 
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolLobbyAutoFillQueueDto>>(); 
  }
} 
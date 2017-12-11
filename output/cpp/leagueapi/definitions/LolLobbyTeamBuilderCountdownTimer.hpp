#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderCountdownTimer { /**/ 
    int32_t counter;/**/
    int64_t timer;/**/
    std::string phaseName;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderCountdownTimer& v) { 
    j["counter"] = v.counter;
    j["timer"] = v.timer;
    j["phaseName"] = v.phaseName;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderCountdownTimer& v) { 
    v.counter = j.at("counter").get<int32_t>(); 
    v.timer = j.at("timer").get<int64_t>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
  }
} 
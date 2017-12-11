#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ChampSelectLcdsGameTimerDTO { /**/ 
    double remainingTimeInMillis;/**/
    std::string currentGameState;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsGameTimerDTO& v) { 
    j["remainingTimeInMillis"] = v.remainingTimeInMillis;
    j["currentGameState"] = v.currentGameState;
  }
  static void from_json(const json& j, ChampSelectLcdsGameTimerDTO& v) { 
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>(); 
    v.currentGameState = j.at("currentGameState").get<std::string>(); 
  }
} 
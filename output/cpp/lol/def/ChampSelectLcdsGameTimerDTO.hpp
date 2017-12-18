#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsGameTimerDTO { 
    double remainingTimeInMillis;
    std::string currentGameState; 
  };
  inline void to_json(json& j, const ChampSelectLcdsGameTimerDTO& v) {
    j["remainingTimeInMillis"] = v.remainingTimeInMillis; 
    j["currentGameState"] = v.currentGameState; 
  }
  inline void from_json(const json& j, ChampSelectLcdsGameTimerDTO& v) {
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>(); 
    v.currentGameState = j.at("currentGameState").get<std::string>(); 
  }
}
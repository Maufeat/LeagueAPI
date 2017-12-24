#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsGameTimerDTO { 
    std::string currentGameState;
    double remainingTimeInMillis; 
  };
  inline void to_json(json& j, const ChampSelectLcdsGameTimerDTO& v) {
    j["currentGameState"] = v.currentGameState; 
    j["remainingTimeInMillis"] = v.remainingTimeInMillis; 
  }
  inline void from_json(const json& j, ChampSelectLcdsGameTimerDTO& v) {
    v.currentGameState = j.at("currentGameState").get<std::string>(); 
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>(); 
  }
}
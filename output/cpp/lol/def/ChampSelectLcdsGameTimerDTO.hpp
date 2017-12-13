#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ChampSelectLcdsGameTimerDTO { 
    double remainingTimeInMillis;
    std::string currentGameState; 
  };
  void to_json(json& j, const ChampSelectLcdsGameTimerDTO& v) {
  j["remainingTimeInMillis"] = v.remainingTimeInMillis; 
  j["currentGameState"] = v.currentGameState; 
  }
  void from_json(const json& j, ChampSelectLcdsGameTimerDTO& v) {
  v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>(); 
  v.currentGameState = j.at("currentGameState").get<std::string>(); 
  }
}
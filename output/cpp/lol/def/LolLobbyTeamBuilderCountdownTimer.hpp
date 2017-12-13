#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderCountdownTimer { 
    int32_t counter;
    int64_t timer;
    std::string phaseName; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderCountdownTimer& v) {
  j["counter"] = v.counter; 
  j["timer"] = v.timer; 
  j["phaseName"] = v.phaseName; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderCountdownTimer& v) {
  v.counter = j.at("counter").get<int32_t>(); 
  v.timer = j.at("timer").get<int64_t>(); 
  v.phaseName = j.at("phaseName").get<std::string>(); 
  }
}
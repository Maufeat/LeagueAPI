#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderCountdownTimer { 
    int64_t timer;
    int32_t counter;
    std::string phaseName; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderCountdownTimer& v) {
    j["timer"] = v.timer; 
    j["counter"] = v.counter; 
    j["phaseName"] = v.phaseName; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderCountdownTimer& v) {
    v.timer = j.at("timer").get<int64_t>(); 
    v.counter = j.at("counter").get<int32_t>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
  }
}
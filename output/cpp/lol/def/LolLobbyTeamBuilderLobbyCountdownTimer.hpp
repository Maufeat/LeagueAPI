#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderLobbyCountdownTimer { 
    int32_t counter;
    int64_t timer;
    std::string phaseName; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderLobbyCountdownTimer& v) {
  j["counter"] = v.counter; 
  j["timer"] = v.timer; 
  j["phaseName"] = v.phaseName; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderLobbyCountdownTimer& v) {
  v.counter = j.at("counter").get<int32_t>(); 
  v.timer = j.at("timer").get<int64_t>(); 
  v.phaseName = j.at("phaseName").get<std::string>(); 
  }
}
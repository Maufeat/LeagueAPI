#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderCountdownTimer { 
    std::string phaseName;
    int64_t timer;
    int32_t counter; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCountdownTimer& v) {
    j["phaseName"] = v.phaseName; 
    j["timer"] = v.timer; 
    j["counter"] = v.counter; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCountdownTimer& v) {
    v.phaseName = j.at("phaseName").get<std::string>(); 
    v.timer = j.at("timer").get<int64_t>(); 
    v.counter = j.at("counter").get<int32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerState.hpp"
namespace lol {
  struct LolClashPlayerTournamentData { 
    int64_t bracketId;
    LolClashPlayerState state;
    std::string rosterId; 
  };
  inline void to_json(json& j, const LolClashPlayerTournamentData& v) {
    j["bracketId"] = v.bracketId; 
    j["state"] = v.state; 
    j["rosterId"] = v.rosterId; 
  }
  inline void from_json(const json& j, LolClashPlayerTournamentData& v) {
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashPlayerState>(); 
    v.rosterId = j.at("rosterId").get<std::string>(); 
  }
}
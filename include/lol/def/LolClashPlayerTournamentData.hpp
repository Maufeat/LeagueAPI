#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerState.hpp"
namespace lol {
  struct LolClashPlayerTournamentData { 
    std::string rosterId;
    int64_t bracketId;
    LolClashPlayerState state; 
  };
  inline void to_json(json& j, const LolClashPlayerTournamentData& v) {
    j["rosterId"] = v.rosterId; 
    j["bracketId"] = v.bracketId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashPlayerTournamentData& v) {
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashPlayerState>(); 
  }
}
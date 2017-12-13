#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashPlayerState.hpp>
namespace lol {
  struct LolClashPlayerTournamentData { 
    LolClashPlayerState state;
    std::string rosterId;
    int64_t bracketId; 
  };
  void to_json(json& j, const LolClashPlayerTournamentData& v) {
  j["state"] = v.state; 
  j["rosterId"] = v.rosterId; 
  j["bracketId"] = v.bracketId; 
  }
  void from_json(const json& j, LolClashPlayerTournamentData& v) {
  v.state = j.at("state").get<LolClashPlayerState>(); 
  v.rosterId = j.at("rosterId").get<std::string>(); 
  v.bracketId = j.at("bracketId").get<int64_t>(); 
  }
}
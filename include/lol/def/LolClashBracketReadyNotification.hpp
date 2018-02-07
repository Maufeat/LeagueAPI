#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashBracketReadyNotification { 
    int64_t tournamentId;
    int64_t bracketId; 
  };
  inline void to_json(json& j, const LolClashBracketReadyNotification& v) {
    j["tournamentId"] = v.tournamentId; 
    j["bracketId"] = v.bracketId; 
  }
  inline void from_json(const json& j, LolClashBracketReadyNotification& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
  }
}
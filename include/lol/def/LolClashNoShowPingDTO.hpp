#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashNoShowPingDTO { 
    int64_t tournamentId;
    int64_t matchId;
    int64_t dodgeTime; 
  };
  inline void to_json(json& j, const LolClashNoShowPingDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["matchId"] = v.matchId; 
    j["dodgeTime"] = v.dodgeTime; 
  }
  inline void from_json(const json& j, LolClashNoShowPingDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.matchId = j.at("matchId").get<int64_t>(); 
    v.dodgeTime = j.at("dodgeTime").get<int64_t>(); 
  }
}
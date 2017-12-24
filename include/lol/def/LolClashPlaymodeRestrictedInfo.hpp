#pragma once
#include "../base_def.hpp" 
#include "LolClashPresenceState.hpp"
namespace lol {
  struct LolClashPlaymodeRestrictedInfo { 
    LolClashPresenceState presenceState;
    int64_t tournamentId;
    bool isRestricted; 
  };
  inline void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) {
    j["presenceState"] = v.presenceState; 
    j["tournamentId"] = v.tournamentId; 
    j["isRestricted"] = v.isRestricted; 
  }
  inline void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) {
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.isRestricted = j.at("isRestricted").get<bool>(); 
  }
}
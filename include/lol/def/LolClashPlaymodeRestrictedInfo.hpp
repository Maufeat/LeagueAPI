#pragma once
#include "../base_def.hpp" 
#include "LolClashPresenceState.hpp"
namespace lol {
  struct LolClashPlaymodeRestrictedInfo { 
    int64_t tournamentId;
    bool isRestricted;
    LolClashPresenceState presenceState; 
  };
  inline void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) {
    j["tournamentId"] = v.tournamentId; 
    j["isRestricted"] = v.isRestricted; 
    j["presenceState"] = v.presenceState; 
  }
  inline void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.isRestricted = j.at("isRestricted").get<bool>(); 
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
  }
}
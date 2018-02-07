#pragma once
#include "../base_def.hpp" 
#include "LolClashPresenceState.hpp"
namespace lol {
  struct LolClashPlaymodeRestrictedInfo { 
    bool isRestricted;
    int64_t tournamentId;
    LolClashPresenceState presenceState; 
  };
  inline void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) {
    j["isRestricted"] = v.isRestricted; 
    j["tournamentId"] = v.tournamentId; 
    j["presenceState"] = v.presenceState; 
  }
  inline void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) {
    v.isRestricted = j.at("isRestricted").get<bool>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
  }
}
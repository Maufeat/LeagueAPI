#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashPresenceState.hpp>
namespace lol {
  struct LolClashPlaymodeRestrictedInfo { 
    LolClashPresenceState presenceState;
    bool isRestricted;
    int64_t tournamentId; 
  };
  void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) {
  j["presenceState"] = v.presenceState; 
  j["isRestricted"] = v.isRestricted; 
  j["tournamentId"] = v.tournamentId; 
  }
  void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) {
  v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
  v.isRestricted = j.at("isRestricted").get<bool>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}
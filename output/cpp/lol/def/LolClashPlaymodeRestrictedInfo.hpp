#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashPresenceState.hpp>
namespace lol {
  struct LolClashPlaymodeRestrictedInfo { 
    int64_t tournamentId;
    LolClashPresenceState presenceState;
    bool isRestricted; 
  };
  void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) {
  j["tournamentId"] = v.tournamentId; 
  j["presenceState"] = v.presenceState; 
  j["isRestricted"] = v.isRestricted; 
  }
  void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) {
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
  v.isRestricted = j.at("isRestricted").get<bool>(); 
  }
}
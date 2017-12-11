#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyGameflowGameDodgeState.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolChampSelectLegacyGameflowGameDodgeState state;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>(); 
  }
} 
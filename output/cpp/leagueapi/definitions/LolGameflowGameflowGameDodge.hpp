#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameDodgeState.hpp>
#include <leagueapi/definitions/LolGameflowGameflowPhase.hpp>

namespace leagueapi {
  struct LolGameflowGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolGameflowGameflowGameDodgeState state;/**/
    LolGameflowGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolGameflowGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolGameflowGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState>(); 
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
  }
} 
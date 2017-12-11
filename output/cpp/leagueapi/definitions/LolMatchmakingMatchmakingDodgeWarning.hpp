#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingDodgeWarning { /**/ 
    None_e = 0, /**/ 
    Penalty_e = 2, /**/ 
    Warning_e = 1, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingDodgeWarning& v) {
    switch(v) { 
    case LolMatchmakingMatchmakingDodgeWarning::None_e:
      j = "None";
    break;
    case LolMatchmakingMatchmakingDodgeWarning::Penalty_e:
      j = "Penalty";
    break;
    case LolMatchmakingMatchmakingDodgeWarning::Warning_e:
      j = "Warning";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingDodgeWarning& v) {
    auto s = j.get<std::string>(); 
    if(s == "None") {
      v = LolMatchmakingMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(s == "Penalty") {
      v = LolMatchmakingMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(s == "Warning") {
      v = LolMatchmakingMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
} 
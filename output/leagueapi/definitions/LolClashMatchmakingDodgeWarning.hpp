#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingDodgeWarning { /**/ 
    None_e = 0, /**/ 
    Penalty_e = 2, /**/ 
    Warning_e = 1, /**/ 
  };
  static void to_json(json& j, const LolClashMatchmakingDodgeWarning& v) {
    switch(v) { 
    case LolClashMatchmakingDodgeWarning::None_e:
      j = "None";
    break;
    case LolClashMatchmakingDodgeWarning::Penalty_e:
      j = "Penalty";
    break;
    case LolClashMatchmakingDodgeWarning::Warning_e:
      j = "Warning";
    break;
    };
  }
  static void from_json(const json& j, LolClashMatchmakingDodgeWarning& v) {
    auto s = j.get<std::string>(); 
    if(s == "None") {
      v = LolClashMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(s == "Penalty") {
      v = LolClashMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(s == "Warning") {
      v = LolClashMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
} 
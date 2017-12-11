#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingDodgeWarning { /**/ 
    None_e = 0, /**/ 
    Penalty_e = 2, /**/ 
    Warning_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    switch(v) { 
    case LolLobbyTeamBuilderMatchmakingDodgeWarning::None_e:
      j = "None";
    break;
    case LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty_e:
      j = "Penalty";
    break;
    case LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning_e:
      j = "Warning";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    auto s = j.get<std::string>(); 
    if(s == "None") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(s == "Penalty") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(s == "Warning") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
} 
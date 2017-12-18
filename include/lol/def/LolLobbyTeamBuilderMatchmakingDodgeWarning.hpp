#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyTeamBuilderMatchmakingDodgeWarning {  
    None_e = 0,
    Penalty_e = 2,
    Warning_e = 1,
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    if(v == LolLobbyTeamBuilderMatchmakingDodgeWarning::None_e) {
      j = "None";
      return;
    }
    if(v == LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty_e) {
      j = "Penalty";
      return;
    }
    if(v == LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning_e) {
      j = "Warning";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    if(j.get<std::string>() == "None") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(j.get<std::string>() == "Penalty") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(j.get<std::string>() == "Warning") {
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
}
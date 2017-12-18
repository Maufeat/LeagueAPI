#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolMatchmakingMatchmakingDodgeWarning {  
    None_e = 0,
    Penalty_e = 2,
    Warning_e = 1,
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingDodgeWarning& v) {
    if(v == LolMatchmakingMatchmakingDodgeWarning::None_e) {
      j = "None";
      return;
    }
    if(v == LolMatchmakingMatchmakingDodgeWarning::Penalty_e) {
      j = "Penalty";
      return;
    }
    if(v == LolMatchmakingMatchmakingDodgeWarning::Warning_e) {
      j = "Warning";
      return;
    }
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingDodgeWarning& v) {
    if(j.get<std::string>() == "None") {
      v = LolMatchmakingMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(j.get<std::string>() == "Penalty") {
      v = LolMatchmakingMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(j.get<std::string>() == "Warning") {
      v = LolMatchmakingMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
}
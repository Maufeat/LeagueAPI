#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashMatchmakingDodgeWarning {  
    None_e = 0,
    Penalty_e = 2,
    Warning_e = 1,
  };
  inline void to_json(json& j, const LolClashMatchmakingDodgeWarning& v) {
    if(v == LolClashMatchmakingDodgeWarning::None_e) {
      j = "None";
      return;
    }
    if(v == LolClashMatchmakingDodgeWarning::Penalty_e) {
      j = "Penalty";
      return;
    }
    if(v == LolClashMatchmakingDodgeWarning::Warning_e) {
      j = "Warning";
      return;
    }
  }
  inline void from_json(const json& j, LolClashMatchmakingDodgeWarning& v) {
    if(j.get<std::string>() == "None") {
      v = LolClashMatchmakingDodgeWarning::None_e;
      return;
    } 
    if(j.get<std::string>() == "Penalty") {
      v = LolClashMatchmakingDodgeWarning::Penalty_e;
      return;
    } 
    if(j.get<std::string>() == "Warning") {
      v = LolClashMatchmakingDodgeWarning::Warning_e;
      return;
    } 
  }
}
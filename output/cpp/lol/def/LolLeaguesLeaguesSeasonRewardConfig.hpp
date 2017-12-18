#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesLeaguesSeasonRewardConfig { 
    bool QualificationWarningEnabled; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesSeasonRewardConfig& v) {
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesSeasonRewardConfig& v) {
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>(); 
  }
}
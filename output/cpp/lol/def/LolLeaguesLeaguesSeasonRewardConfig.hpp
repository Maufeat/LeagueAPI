#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesLeaguesSeasonRewardConfig { 
    bool QualificationWarningEnabled; 
  };
  void to_json(json& j, const LolLeaguesLeaguesSeasonRewardConfig& v) {
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled; 
  }
  void from_json(const json& j, LolLeaguesLeaguesSeasonRewardConfig& v) {
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>(); 
  }
}
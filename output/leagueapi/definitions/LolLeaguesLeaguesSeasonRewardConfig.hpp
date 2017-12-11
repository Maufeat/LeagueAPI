#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLeaguesLeaguesSeasonRewardConfig { /**/ 
    bool QualificationWarningEnabled;/**/
  };
  static void to_json(json& j, const LolLeaguesLeaguesSeasonRewardConfig& v) { 
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled;
  }
  static void from_json(const json& j, LolLeaguesLeaguesSeasonRewardConfig& v) { 
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>(); 
  }
} 
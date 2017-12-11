#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPftPFTEvent { /**/ 
    uint64_t playerSurveyId;/**/
    std::string action;/**/
    std::vector<json> data;/**/
  };
  static void to_json(json& j, const LolPftPFTEvent& v) { 
    j["playerSurveyId"] = v.playerSurveyId;
    j["action"] = v.action;
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolPftPFTEvent& v) { 
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>(); 
    v.action = j.at("action").get<std::string>(); 
    v.data = j.at("data").get<std::vector<json>>(); 
  }
} 
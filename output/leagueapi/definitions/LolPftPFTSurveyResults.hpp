#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPftPFTQuestionResponse.hpp>"
#include "<leagueapi/definitions/LolPftPFTEvent.hpp>"

namespace leagueapi {
  struct LolPftPFTSurveyResults { /**/ 
    std::vector<LolPftPFTQuestionResponse> questionResponses;/**/
    std::vector<LolPftPFTEvent> actions;/**/
  };
  static void to_json(json& j, const LolPftPFTSurveyResults& v) { 
    j["questionResponses"] = v.questionResponses;
    j["actions"] = v.actions;
  }
  static void from_json(const json& j, LolPftPFTSurveyResults& v) { 
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse>>(); 
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent>>(); 
  }
} 
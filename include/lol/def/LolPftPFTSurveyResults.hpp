#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEvent.hpp"
#include "LolPftPFTQuestionResponse.hpp"
namespace lol {
  struct LolPftPFTSurveyResults { 
    std::vector<LolPftPFTEvent> actions;
    std::vector<LolPftPFTQuestionResponse> questionResponses; 
  };
  inline void to_json(json& j, const LolPftPFTSurveyResults& v) {
    j["actions"] = v.actions; 
    j["questionResponses"] = v.questionResponses; 
  }
  inline void from_json(const json& j, LolPftPFTSurveyResults& v) {
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent>>(); 
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse>>(); 
  }
}
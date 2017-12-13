#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftPFTQuestionResponse.hpp>
#include <lol/def/LolPftPFTEvent.hpp>
namespace lol {
  struct LolPftPFTSurveyResults { 
    std::vector<LolPftPFTQuestionResponse> questionResponses;
    std::vector<LolPftPFTEvent> actions; 
  };
  void to_json(json& j, const LolPftPFTSurveyResults& v) {
  j["questionResponses"] = v.questionResponses; 
  j["actions"] = v.actions; 
  }
  void from_json(const json& j, LolPftPFTSurveyResults& v) {
  v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse>>(); 
  v.actions = j.at("actions").get<std::vector<LolPftPFTEvent>>(); 
  }
}
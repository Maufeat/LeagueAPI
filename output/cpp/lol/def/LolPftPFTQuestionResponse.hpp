#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTQuestionResponse { 
    uint64_t questionId;
    json responseData; 
  };
  inline void to_json(json& j, const LolPftPFTQuestionResponse& v) {
    j["questionId"] = v.questionId; 
    j["responseData"] = v.responseData; 
  }
  inline void from_json(const json& j, LolPftPFTQuestionResponse& v) {
    v.questionId = j.at("questionId").get<uint64_t>(); 
    v.responseData = j.at("responseData").get<json>(); 
  }
}
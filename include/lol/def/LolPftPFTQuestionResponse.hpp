#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTQuestionResponse { 
    json responseData;
    uint64_t questionId; 
  };
  inline void to_json(json& j, const LolPftPFTQuestionResponse& v) {
    j["responseData"] = v.responseData; 
    j["questionId"] = v.questionId; 
  }
  inline void from_json(const json& j, LolPftPFTQuestionResponse& v) {
    v.responseData = j.at("responseData").get<json>(); 
    v.questionId = j.at("questionId").get<uint64_t>(); 
  }
}
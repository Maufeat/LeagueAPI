#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPftPFTQuestionResponse { /**/ 
    uint64_t questionId;/**/
    json responseData;/**/
  };
  static void to_json(json& j, const LolPftPFTQuestionResponse& v) { 
    j["questionId"] = v.questionId;
    j["responseData"] = v.responseData;
  }
  static void from_json(const json& j, LolPftPFTQuestionResponse& v) { 
    v.questionId = j.at("questionId").get<uint64_t>(); 
    v.responseData = j.at("responseData").get<json>(); 
  }
} 
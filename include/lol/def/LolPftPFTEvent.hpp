#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTEvent { 
    uint64_t playerSurveyId;
    std::vector<json> data;
    std::string action; 
  };
  inline void to_json(json& j, const LolPftPFTEvent& v) {
    j["playerSurveyId"] = v.playerSurveyId; 
    j["data"] = v.data; 
    j["action"] = v.action; 
  }
  inline void from_json(const json& j, LolPftPFTEvent& v) {
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>(); 
    v.data = j.at("data").get<std::vector<json>>(); 
    v.action = j.at("action").get<std::string>(); 
  }
}
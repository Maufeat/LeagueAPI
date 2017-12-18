#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTEvent { 
    std::string action;
    uint64_t playerSurveyId;
    std::vector<json> data; 
  };
  inline void to_json(json& j, const LolPftPFTEvent& v) {
    j["action"] = v.action; 
    j["playerSurveyId"] = v.playerSurveyId; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolPftPFTEvent& v) {
    v.action = j.at("action").get<std::string>(); 
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>(); 
    v.data = j.at("data").get<std::vector<json>>(); 
  }
}
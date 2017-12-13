#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTEvent { 
    uint64_t playerSurveyId;
    std::string action;
    std::vector<json> data; 
  };
  void to_json(json& j, const LolPftPFTEvent& v) {
  j["playerSurveyId"] = v.playerSurveyId; 
  j["action"] = v.action; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, LolPftPFTEvent& v) {
  v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>(); 
  v.action = j.at("action").get<std::string>(); 
  v.data = j.at("data").get<std::vector<json>>(); 
  }
}
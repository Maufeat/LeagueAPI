#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTSurvey { 
    std::string display;
    uint64_t id;
    std::map<std::string, json> data;
    std::string type;
    std::string title;
    std::string caption; 
  };
  void to_json(json& j, const LolPftPFTSurvey& v) {
  j["display"] = v.display; 
  j["id"] = v.id; 
  j["data"] = v.data; 
  j["type"] = v.type; 
  j["title"] = v.title; 
  j["caption"] = v.caption; 
  }
  void from_json(const json& j, LolPftPFTSurvey& v) {
  v.display = j.at("display").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.data = j.at("data").get<std::map<std::string, json>>(); 
  v.type = j.at("type").get<std::string>(); 
  v.title = j.at("title").get<std::string>(); 
  v.caption = j.at("caption").get<std::string>(); 
  }
}
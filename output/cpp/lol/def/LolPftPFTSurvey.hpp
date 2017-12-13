#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTSurvey { 
    std::string caption;
    std::string display;
    std::string type;
    std::string title;
    std::map<std::string, json> data;
    uint64_t id; 
  };
  void to_json(json& j, const LolPftPFTSurvey& v) {
  j["caption"] = v.caption; 
  j["display"] = v.display; 
  j["type"] = v.type; 
  j["title"] = v.title; 
  j["data"] = v.data; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolPftPFTSurvey& v) {
  v.caption = j.at("caption").get<std::string>(); 
  v.display = j.at("display").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.title = j.at("title").get<std::string>(); 
  v.data = j.at("data").get<std::map<std::string, json>>(); 
  v.id = j.at("id").get<uint64_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTSurvey { 
    std::string display;
    std::string caption;
    uint64_t id;
    std::string type;
    std::string title;
    std::map<std::string, json> data; 
  };
  inline void to_json(json& j, const LolPftPFTSurvey& v) {
    j["display"] = v.display; 
    j["caption"] = v.caption; 
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["title"] = v.title; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolPftPFTSurvey& v) {
    v.display = j.at("display").get<std::string>(); 
    v.caption = j.at("caption").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, json>>(); 
  }
}
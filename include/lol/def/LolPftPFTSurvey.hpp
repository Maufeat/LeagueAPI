#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTSurvey { 
    uint64_t id;
    std::string title;
    std::string caption;
    std::string type;
    std::string display;
    std::map<std::string, json> data; 
  };
  inline void to_json(json& j, const LolPftPFTSurvey& v) {
    j["id"] = v.id; 
    j["title"] = v.title; 
    j["caption"] = v.caption; 
    j["type"] = v.type; 
    j["display"] = v.display; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolPftPFTSurvey& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.caption = j.at("caption").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.display = j.at("display").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, json>>(); 
  }
}
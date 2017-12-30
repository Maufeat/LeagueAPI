#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTSurvey { 
    std::map<std::string, json> data;
    uint64_t id;
    std::string caption;
    std::string type;
    std::string title;
    std::string display; 
  };
  inline void to_json(json& j, const LolPftPFTSurvey& v) {
    j["data"] = v.data; 
    j["id"] = v.id; 
    j["caption"] = v.caption; 
    j["type"] = v.type; 
    j["title"] = v.title; 
    j["display"] = v.display; 
  }
  inline void from_json(const json& j, LolPftPFTSurvey& v) {
    v.data = j.at("data").get<std::map<std::string, json>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.caption = j.at("caption").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.display = j.at("display").get<std::string>(); 
  }
}
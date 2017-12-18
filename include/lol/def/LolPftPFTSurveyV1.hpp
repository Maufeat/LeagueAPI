#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTSurveyV1 { 
    std::string caption;
    std::string type;
    std::string title;
    std::string url;
    uint64_t id; 
  };
  inline void to_json(json& j, const LolPftPFTSurveyV1& v) {
    j["caption"] = v.caption; 
    j["type"] = v.type; 
    j["title"] = v.title; 
    j["url"] = v.url; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolPftPFTSurveyV1& v) {
    v.caption = j.at("caption").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}
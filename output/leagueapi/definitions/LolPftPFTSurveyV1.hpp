#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPftPFTSurveyV1 { /**/ 
    std::string type;/**/
    std::string title;/**/
    std::string caption;/**/
    uint64_t id;/**/
    std::string url;/**/
  };
  static void to_json(json& j, const LolPftPFTSurveyV1& v) { 
    j["type"] = v.type;
    j["title"] = v.title;
    j["caption"] = v.caption;
    j["id"] = v.id;
    j["url"] = v.url;
  }
  static void from_json(const json& j, LolPftPFTSurveyV1& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.caption = j.at("caption").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.url = j.at("url").get<std::string>(); 
  }
} 
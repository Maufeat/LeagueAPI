#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAcsAcsEndPoint { /**/ 
    std::string url;/**/
  };
  static void to_json(json& j, const LolAcsAcsEndPoint& v) { 
    j["url"] = v.url;
  }
  static void from_json(const json& j, LolAcsAcsEndPoint& v) { 
    v.url = j.at("url").get<std::string>(); 
  }
} 
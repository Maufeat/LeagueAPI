#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderUrlResource { /**/ 
    std::string url;/**/
  };
  static void to_json(json& j, const RecofrienderUrlResource& v) { 
    j["url"] = v.url;
  }
  static void from_json(const json& j, RecofrienderUrlResource& v) { 
    v.url = j.at("url").get<std::string>(); 
  }
} 
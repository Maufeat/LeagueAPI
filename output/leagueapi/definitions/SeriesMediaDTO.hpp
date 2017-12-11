#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SeriesMediaDTO { /**/ 
    std::string backgroundUrl;/**/
  };
  static void to_json(json& j, const SeriesMediaDTO& v) { 
    j["backgroundUrl"] = v.backgroundUrl;
  }
  static void from_json(const json& j, SeriesMediaDTO& v) { 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  }
} 
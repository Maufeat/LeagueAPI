#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SeriesAlertDTO { /**/ 
    std::string title;/**/
    int64_t alertTime;/**/
    std::string description;/**/
  };
  static void to_json(json& j, const SeriesAlertDTO& v) { 
    j["title"] = v.title;
    j["alertTime"] = v.alertTime;
    j["description"] = v.description;
  }
  static void from_json(const json& j, SeriesAlertDTO& v) { 
    v.title = j.at("title").get<std::string>(); 
    v.alertTime = j.at("alertTime").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MissionAlertDTO { /**/ 
    std::string type;/**/
    std::string message;/**/
    int64_t alertTime;/**/
  };
  static void to_json(json& j, const MissionAlertDTO& v) { 
    j["type"] = v.type;
    j["message"] = v.message;
    j["alertTime"] = v.alertTime;
  }
  static void from_json(const json& j, MissionAlertDTO& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.alertTime = j.at("alertTime").get<int64_t>(); 
  }
} 
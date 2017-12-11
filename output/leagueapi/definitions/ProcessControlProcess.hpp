#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ProcessControlProcess { /**/ 
    std::optional<float> restart_countdown_seconds;/**/
    std::string status;/**/
  };
  static void to_json(json& j, const ProcessControlProcess& v) { 
    j["restart_countdown_seconds"] = v.restart_countdown_seconds;
    j["status"] = v.status;
  }
  static void from_json(const json& j, ProcessControlProcess& v) { 
    v.restart_countdown_seconds = j.at("restart_countdown_seconds").get<std::optional<float>>(); 
    v.status = j.at("status").get<std::string>(); 
  }
} 
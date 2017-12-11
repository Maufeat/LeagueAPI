#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlaytimeReminder { /**/ 
    uint32_t hours;/**/
  };
  static void to_json(json& j, const PlaytimeReminder& v) { 
    j["hours"] = v.hours;
  }
  static void from_json(const json& j, PlaytimeReminder& v) { 
    v.hours = j.at("hours").get<uint32_t>(); 
  }
} 
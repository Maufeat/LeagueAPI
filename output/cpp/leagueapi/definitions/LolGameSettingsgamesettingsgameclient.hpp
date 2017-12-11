#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGameSettingsgamesettingsgameclient { /**/ 
    bool running;/**/
  };
  static void to_json(json& j, const LolGameSettingsgamesettingsgameclient& v) { 
    j["running"] = v.running;
  }
  static void from_json(const json& j, LolGameSettingsgamesettingsgameclient& v) { 
    v.running = j.at("running").get<bool>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameSettingsgamesettingsgameclient.hpp>

namespace leagueapi {
  struct LolGameSettingsgamesettingsgameflowsession { /**/ 
    LolGameSettingsgamesettingsgameclient gameClient;/**/
  };
  static void to_json(json& j, const LolGameSettingsgamesettingsgameflowsession& v) { 
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolGameSettingsgamesettingsgameflowsession& v) { 
    v.gameClient = j.at("gameClient").get<LolGameSettingsgamesettingsgameclient>(); 
  }
} 
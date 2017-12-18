#pragma once
#include "../base_def.hpp" 
#include "LolGameSettingsgamesettingsgameclient.hpp"
namespace lol {
  struct LolGameSettingsgamesettingsgameflowsession { 
    LolGameSettingsgamesettingsgameclient gameClient; 
  };
  inline void to_json(json& j, const LolGameSettingsgamesettingsgameflowsession& v) {
    j["gameClient"] = v.gameClient; 
  }
  inline void from_json(const json& j, LolGameSettingsgamesettingsgameflowsession& v) {
    v.gameClient = j.at("gameClient").get<LolGameSettingsgamesettingsgameclient>(); 
  }
}
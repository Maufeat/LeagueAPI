#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameSettingsgamesettingsgameclient.hpp>
namespace lol {
  struct LolGameSettingsgamesettingsgameflowsession { 
    LolGameSettingsgamesettingsgameclient gameClient; 
  };
  void to_json(json& j, const LolGameSettingsgamesettingsgameflowsession& v) {
  j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolGameSettingsgamesettingsgameflowsession& v) {
  v.gameClient = j.at("gameClient").get<LolGameSettingsgamesettingsgameclient>(); 
  }
}
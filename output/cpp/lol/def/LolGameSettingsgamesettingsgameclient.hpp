#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameSettingsgamesettingsgameclient { 
    bool running; 
  };
  void to_json(json& j, const LolGameSettingsgamesettingsgameclient& v) {
    j["running"] = v.running; 
  }
  void from_json(const json& j, LolGameSettingsgamesettingsgameclient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPlatformConfig { 
    bool PerksEnabled; 
  };
  void to_json(json& j, const LolPerksPlatformConfig& v) {
    j["PerksEnabled"] = v.PerksEnabled; 
  }
  void from_json(const json& j, LolPerksPlatformConfig& v) {
    v.PerksEnabled = j.at("PerksEnabled").get<bool>(); 
  }
}
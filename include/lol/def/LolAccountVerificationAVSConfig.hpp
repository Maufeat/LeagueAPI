#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationAVSConfig { 
    bool Enabled;
    bool PasswordEnabled; 
  };
  inline void to_json(json& j, const LolAccountVerificationAVSConfig& v) {
    j["Enabled"] = v.Enabled; 
    j["PasswordEnabled"] = v.PasswordEnabled; 
  }
  inline void from_json(const json& j, LolAccountVerificationAVSConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.PasswordEnabled = j.at("PasswordEnabled").get<bool>(); 
  }
}
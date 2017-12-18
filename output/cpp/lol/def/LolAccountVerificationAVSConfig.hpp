#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationAVSConfig { 
    bool Enabled; 
  };
  inline void to_json(json& j, const LolAccountVerificationAVSConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  inline void from_json(const json& j, LolAccountVerificationAVSConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}
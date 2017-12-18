#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGeoinfoGeoInfoConfig { 
    bool Enabled; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfoConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfoConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}
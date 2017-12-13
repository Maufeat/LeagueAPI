#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct HighlightsDynamicConfig { 
    bool Enabled; 
  };
  void to_json(json& j, const HighlightsDynamicConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  void from_json(const json& j, HighlightsDynamicConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct HighlightsDynamicConfig { 
    bool Enabled; 
  };
  inline void to_json(json& j, const HighlightsDynamicConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  inline void from_json(const json& j, HighlightsDynamicConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}
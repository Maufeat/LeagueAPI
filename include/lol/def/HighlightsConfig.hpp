#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct HighlightsConfig { 
    bool isHighlightsEnabled;
    std::string invalidHighlightNameCharacters; 
  };
  inline void to_json(json& j, const HighlightsConfig& v) {
    j["isHighlightsEnabled"] = v.isHighlightsEnabled; 
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters; 
  }
  inline void from_json(const json& j, HighlightsConfig& v) {
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>(); 
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>(); 
  }
}
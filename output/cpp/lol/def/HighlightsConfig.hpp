#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct HighlightsConfig { 
    std::string invalidHighlightNameCharacters;
    bool isHighlightsEnabled; 
  };
  void to_json(json& j, const HighlightsConfig& v) {
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters; 
    j["isHighlightsEnabled"] = v.isHighlightsEnabled; 
  }
  void from_json(const json& j, HighlightsConfig& v) {
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>(); 
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>(); 
  }
}
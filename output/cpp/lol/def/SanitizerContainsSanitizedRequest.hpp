#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerContainsSanitizedRequest { 
    std::optional<bool> removeDisallowedChars;
    std::string text;
    std::optional<uint32_t> level;
    std::optional<bool> includeEmbedded;
    std::optional<bool> aggressiveScan; 
  };
  void to_json(json& j, const SanitizerContainsSanitizedRequest& v) {
  j["removeDisallowedChars"] = v.removeDisallowedChars; 
  j["text"] = v.text; 
  j["level"] = v.level; 
  j["includeEmbedded"] = v.includeEmbedded; 
  j["aggressiveScan"] = v.aggressiveScan; 
  }
  void from_json(const json& j, SanitizerContainsSanitizedRequest& v) {
  v.removeDisallowedChars = j.at("removeDisallowedChars").get<std::optional<bool>>(); 
  v.text = j.at("text").get<std::string>(); 
  v.level = j.at("level").get<std::optional<uint32_t>>(); 
  v.includeEmbedded = j.at("includeEmbedded").get<std::optional<bool>>(); 
  v.aggressiveScan = j.at("aggressiveScan").get<std::optional<bool>>(); 
  }
}
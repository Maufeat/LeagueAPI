#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerContainsSanitizedRequest { 
    std::optional<bool> removeDisallowedChars;
    std::optional<bool> aggressiveScan;
    std::optional<uint32_t> level;
    std::optional<bool> includeEmbedded;
    std::string text; 
  };
  inline void to_json(json& j, const SanitizerContainsSanitizedRequest& v) {
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    if(v.level)
      j["level"] = *v.level;
    if(v.includeEmbedded)
      j["includeEmbedded"] = *v.includeEmbedded;
    j["text"] = v.text; 
  }
  inline void from_json(const json& j, SanitizerContainsSanitizedRequest& v) {
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<std::optional<bool>>(); 
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<std::optional<bool>>(); 
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("includeEmbedded"); it != j.end() && !it->is_null())
      v.includeEmbedded = it->get<std::optional<bool>>(); 
    v.text = j.at("text").get<std::string>(); 
  }
}
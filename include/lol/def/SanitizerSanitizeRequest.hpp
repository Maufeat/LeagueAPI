#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerSanitizeRequest { 
    std::optional<std::vector<std::string>> texts;
    std::optional<std::string> text;
    std::optional<uint32_t> level;
    std::optional<bool> removeDisallowedChars;
    std::optional<bool> aggressiveScan; 
  };
  inline void to_json(json& j, const SanitizerSanitizeRequest& v) {
    if(v.texts)
      j["texts"] = *v.texts;
    if(v.text)
      j["text"] = *v.text;
    if(v.level)
      j["level"] = *v.level;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
  }
  inline void from_json(const json& j, SanitizerSanitizeRequest& v) {
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::optional<std::vector<std::string>>>(); 
    if(auto it = j.find("text"); it != j.end() && !it->is_null())
      v.text = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<std::optional<bool>>(); 
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<std::optional<bool>>(); 
  }
}
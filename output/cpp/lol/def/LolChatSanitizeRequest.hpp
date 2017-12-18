#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatSanitizeRequest { 
    std::optional<bool> aggressiveScan;
    std::vector<std::string> texts;
    std::optional<uint32_t> level;
    std::optional<bool> removeDisallowedChars; 
  };
  inline void to_json(json& j, const LolChatSanitizeRequest& v) {
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    j["texts"] = v.texts; 
    if(v.level)
      j["level"] = *v.level;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
  }
  inline void from_json(const json& j, LolChatSanitizeRequest& v) {
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<std::optional<bool>>(); 
    v.texts = j.at("texts").get<std::vector<std::string>>(); 
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<std::optional<bool>>(); 
  }
}
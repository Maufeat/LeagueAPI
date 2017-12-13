#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerSanitizeRequest { 
    std::optional<bool> aggressiveScan;
    std::optional<std::vector<std::string>> texts;
    std::optional<std::string> text;
    std::optional<uint32_t> level;
    std::optional<bool> removeDisallowedChars; 
  };
  void to_json(json& j, const SanitizerSanitizeRequest& v) {
  j["aggressiveScan"] = v.aggressiveScan; 
  j["texts"] = v.texts; 
  j["text"] = v.text; 
  j["level"] = v.level; 
  j["removeDisallowedChars"] = v.removeDisallowedChars; 
  }
  void from_json(const json& j, SanitizerSanitizeRequest& v) {
  v.aggressiveScan = j.at("aggressiveScan").get<std::optional<bool>>(); 
  v.texts = j.at("texts").get<std::optional<std::vector<std::string>>>(); 
  v.text = j.at("text").get<std::optional<std::string>>(); 
  v.level = j.at("level").get<std::optional<uint32_t>>(); 
  v.removeDisallowedChars = j.at("removeDisallowedChars").get<std::optional<bool>>(); 
  }
}
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SanitizerSanitizeRequest { /**/ 
    std::optional<std::vector<std::string>> texts;/**/
    std::optional<uint32_t> level;/**/
    std::optional<bool> aggressiveScan;/**/
    std::optional<std::string> text;/**/
    std::optional<bool> removeDisallowedChars;/**/
  };
  static void to_json(json& j, const SanitizerSanitizeRequest& v) { 
    j["texts"] = v.texts;
    j["level"] = v.level;
    j["aggressiveScan"] = v.aggressiveScan;
    j["text"] = v.text;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
  }
  static void from_json(const json& j, SanitizerSanitizeRequest& v) { 
    v.texts = j.at("texts").get<std::optional<std::vector<std::string>>>(); 
    v.level = j.at("level").get<std::optional<uint32_t>>(); 
    v.aggressiveScan = j.at("aggressiveScan").get<std::optional<bool>>(); 
    v.text = j.at("text").get<std::optional<std::string>>(); 
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<std::optional<bool>>(); 
  }
} 
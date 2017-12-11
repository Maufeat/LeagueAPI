#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatSanitizeRequest { /**/ 
    std::vector<std::string> texts;/**/
    std::optional<uint32_t> level;/**/
    std::optional<bool> aggressiveScan;/**/
    std::optional<bool> removeDisallowedChars;/**/
  };
  static void to_json(json& j, const LolChatSanitizeRequest& v) { 
    j["texts"] = v.texts;
    j["level"] = v.level;
    j["aggressiveScan"] = v.aggressiveScan;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
  }
  static void from_json(const json& j, LolChatSanitizeRequest& v) { 
    v.texts = j.at("texts").get<std::vector<std::string>>(); 
    v.level = j.at("level").get<std::optional<uint32_t>>(); 
    v.aggressiveScan = j.at("aggressiveScan").get<std::optional<bool>>(); 
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<std::optional<bool>>(); 
  }
} 
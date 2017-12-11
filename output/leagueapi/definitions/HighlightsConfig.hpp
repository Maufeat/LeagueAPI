#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct HighlightsConfig { /**/ 
    std::string invalidHighlightNameCharacters;/**/
    bool isHighlightsEnabled;/**/
  };
  static void to_json(json& j, const HighlightsConfig& v) { 
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters;
    j["isHighlightsEnabled"] = v.isHighlightsEnabled;
  }
  static void from_json(const json& j, HighlightsConfig& v) { 
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>(); 
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>(); 
  }
} 
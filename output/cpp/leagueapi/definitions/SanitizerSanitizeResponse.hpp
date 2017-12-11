#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SanitizerSanitizeResponse { /**/ 
    std::optional<std::vector<std::string>> texts;/**/
    std::optional<std::string> text;/**/
    bool modified;/**/
  };
  static void to_json(json& j, const SanitizerSanitizeResponse& v) { 
    j["texts"] = v.texts;
    j["text"] = v.text;
    j["modified"] = v.modified;
  }
  static void from_json(const json& j, SanitizerSanitizeResponse& v) { 
    v.texts = j.at("texts").get<std::optional<std::vector<std::string>>>(); 
    v.text = j.at("text").get<std::optional<std::string>>(); 
    v.modified = j.at("modified").get<bool>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerSanitizeResponse { 
    bool modified;
    std::optional<std::string> text;
    std::optional<std::vector<std::string>> texts; 
  };
  inline void to_json(json& j, const SanitizerSanitizeResponse& v) {
    j["modified"] = v.modified; 
    if(v.text)
      j["text"] = *v.text;
    if(v.texts)
      j["texts"] = *v.texts;
  }
  inline void from_json(const json& j, SanitizerSanitizeResponse& v) {
    v.modified = j.at("modified").get<bool>(); 
    if(auto it = j.find("text"); it != j.end() && !it->is_null())
      v.text = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::optional<std::vector<std::string>>>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerSanitizeResponse { 
    std::optional<std::vector<std::string>> texts;
    std::optional<std::string> text;
    bool modified; 
  };
  void to_json(json& j, const SanitizerSanitizeResponse& v) {
    if(v.texts)
      j["texts"] = *v.texts;
    if(v.text)
      j["text"] = *v.text;
    j["modified"] = v.modified; 
  }
  void from_json(const json& j, SanitizerSanitizeResponse& v) {
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::optional<std::vector<std::string>>>(); 
    if(auto it = j.find("text"); it != j.end() && !it->is_null())
      v.text = it->get<std::optional<std::string>>(); 
    v.modified = j.at("modified").get<bool>(); 
  }
}
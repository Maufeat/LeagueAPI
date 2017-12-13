#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerSanitizeResponse { 
    std::optional<std::vector<std::string>> texts;
    std::optional<std::string> text;
    bool modified; 
  };
  void to_json(json& j, const SanitizerSanitizeResponse& v) {
  j["texts"] = v.texts; 
  j["text"] = v.text; 
  j["modified"] = v.modified; 
  }
  void from_json(const json& j, SanitizerSanitizeResponse& v) {
  v.texts = j.at("texts").get<std::optional<std::vector<std::string>>>(); 
  v.text = j.at("text").get<std::optional<std::string>>(); 
  v.modified = j.at("modified").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSanitizeResponse { 
    bool modified;
    std::optional<std::vector<std::string>> texts; 
  };
  inline void to_json(json& j, const LolChatSanitizeResponse& v) {
    j["modified"] = v.modified; 
    if(v.texts)
      j["texts"] = *v.texts;
  }
  inline void from_json(const json& j, LolChatSanitizeResponse& v) {
    v.modified = j.at("modified").get<bool>(); 
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::optional<std::vector<std::string>>>(); 
  }
}
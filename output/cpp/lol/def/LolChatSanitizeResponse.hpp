#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatSanitizeResponse { 
    std::optional<std::vector<std::string>> texts;
    bool modified; 
  };
  void to_json(json& j, const LolChatSanitizeResponse& v) {
    if(v.texts)
      j["texts"] = *v.texts;
    j["modified"] = v.modified; 
  }
  void from_json(const json& j, LolChatSanitizeResponse& v) {
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::optional<std::vector<std::string>>>(); 
    v.modified = j.at("modified").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSanitizerStatus { 
    bool ready;
    std::string locale;
    std::string platformID; 
  };
  inline void to_json(json& j, const LolChatSanitizerStatus& v) {
    j["ready"] = v.ready; 
    j["locale"] = v.locale; 
    j["platformID"] = v.platformID; 
  }
  inline void from_json(const json& j, LolChatSanitizerStatus& v) {
    v.ready = j.at("ready").get<bool>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.platformID = j.at("platformID").get<std::string>(); 
  }
}
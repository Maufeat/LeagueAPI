#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSanitizerStatus { 
    std::string locale;
    std::string platformID;
    bool ready; 
  };
  inline void to_json(json& j, const LolChatSanitizerStatus& v) {
    j["locale"] = v.locale; 
    j["platformID"] = v.platformID; 
    j["ready"] = v.ready; 
  }
  inline void from_json(const json& j, LolChatSanitizerStatus& v) {
    v.locale = j.at("locale").get<std::string>(); 
    v.platformID = j.at("platformID").get<std::string>(); 
    v.ready = j.at("ready").get<bool>(); 
  }
}
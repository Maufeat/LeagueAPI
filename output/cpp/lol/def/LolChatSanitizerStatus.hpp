#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSanitizerStatus { 
    std::string platformID;
    std::string locale;
    bool ready; 
  };
  inline void to_json(json& j, const LolChatSanitizerStatus& v) {
    j["platformID"] = v.platformID; 
    j["locale"] = v.locale; 
    j["ready"] = v.ready; 
  }
  inline void from_json(const json& j, LolChatSanitizerStatus& v) {
    v.platformID = j.at("platformID").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.ready = j.at("ready").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSanitizerStatus { 
    bool ready;
    std::string platformID;
    std::string locale; 
  };
  inline void to_json(json& j, const LolChatSanitizerStatus& v) {
    j["ready"] = v.ready; 
    j["platformID"] = v.platformID; 
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, LolChatSanitizerStatus& v) {
    v.ready = j.at("ready").get<bool>(); 
    v.platformID = j.at("platformID").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}
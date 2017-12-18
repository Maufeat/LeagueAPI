#pragma once
#include "../base_def.hpp" 
#include "LolChatSessionState.hpp"
namespace lol {
  struct LolChatSessionResource { 
    uint32_t sessionExpire;
    LolChatSessionState sessionState; 
  };
  inline void to_json(json& j, const LolChatSessionResource& v) {
    j["sessionExpire"] = v.sessionExpire; 
    j["sessionState"] = v.sessionState; 
  }
  inline void from_json(const json& j, LolChatSessionResource& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
    v.sessionState = j.at("sessionState").get<LolChatSessionState>(); 
  }
}
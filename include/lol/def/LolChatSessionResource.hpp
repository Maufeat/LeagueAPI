#pragma once
#include "../base_def.hpp" 
#include "LolChatSessionState.hpp"
namespace lol {
  struct LolChatSessionResource { 
    LolChatSessionState sessionState;
    uint32_t sessionExpire; 
  };
  inline void to_json(json& j, const LolChatSessionResource& v) {
    j["sessionState"] = v.sessionState; 
    j["sessionExpire"] = v.sessionExpire; 
  }
  inline void from_json(const json& j, LolChatSessionResource& v) {
    v.sessionState = j.at("sessionState").get<LolChatSessionState>(); 
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
  }
}
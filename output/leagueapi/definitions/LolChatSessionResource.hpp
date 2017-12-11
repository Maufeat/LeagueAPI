#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatSessionState.hpp>"

namespace leagueapi {
  struct LolChatSessionResource { /**/ 
    uint32_t sessionExpire;/**/
    LolChatSessionState sessionState;/**/
  };
  static void to_json(json& j, const LolChatSessionResource& v) { 
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }
  static void from_json(const json& j, LolChatSessionResource& v) { 
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
    v.sessionState = j.at("sessionState").get<LolChatSessionState>(); 
  }
} 
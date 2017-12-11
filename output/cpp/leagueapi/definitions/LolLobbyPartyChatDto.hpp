#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyPartyChatDto { /**/ 
    std::string jid;/**/
  };
  static void to_json(json& j, const LolLobbyPartyChatDto& v) { 
    j["jid"] = v.jid;
  }
  static void from_json(const json& j, LolLobbyPartyChatDto& v) { 
    v.jid = j.at("jid").get<std::string>(); 
  }
} 
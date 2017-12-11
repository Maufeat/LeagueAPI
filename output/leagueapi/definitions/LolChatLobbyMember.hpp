#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatLobbyMember { /**/ 
    bool isOwner;/**/
    uint64_t id;/**/
  };
  static void to_json(json& j, const LolChatLobbyMember& v) { 
    j["isOwner"] = v.isOwner;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChatLobbyMember& v) { 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
} 
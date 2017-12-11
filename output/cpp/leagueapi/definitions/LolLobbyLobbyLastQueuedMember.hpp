#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLobbyLastQueuedMember { /**/ 
    uint64_t id;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyLastQueuedMember& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolLobbyLobbyLastQueuedMember& v) { 
    v.id = j.at("id").get<uint64_t>(); 
  }
} 
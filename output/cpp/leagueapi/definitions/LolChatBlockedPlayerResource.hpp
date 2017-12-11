#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatBlockedPlayerResource { /**/ 
    uint64_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolChatBlockedPlayerResource& v) { 
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolChatBlockedPlayerResource& v) { 
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 
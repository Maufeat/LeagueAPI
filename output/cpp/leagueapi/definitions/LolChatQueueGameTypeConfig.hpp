#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatQueueGameTypeConfig { /**/ 
    int64_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolChatQueueGameTypeConfig& v) { 
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolChatQueueGameTypeConfig& v) { 
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 
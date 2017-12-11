#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatGameflowGameMap { /**/ 
    int64_t id;/**/
  };
  static void to_json(json& j, const LolChatGameflowGameMap& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChatGameflowGameMap& v) { 
    v.id = j.at("id").get<int64_t>(); 
  }
} 
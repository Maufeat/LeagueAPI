#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameLobbyInvitation { /**/ 
    std::string state;/**/
  };
  static void to_json(json& j, const LolEndOfGameLobbyInvitation& v) { 
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolEndOfGameLobbyInvitation& v) { 
    v.state = j.at("state").get<std::string>(); 
  }
} 
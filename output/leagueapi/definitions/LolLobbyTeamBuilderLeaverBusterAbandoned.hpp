#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderLeaverBusterAbandoned { /**/ 
    std::string abandonerName;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLeaverBusterAbandoned& v) { 
    j["abandonerName"] = v.abandonerName;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLeaverBusterAbandoned& v) { 
    v.abandonerName = j.at("abandonerName").get<std::string>(); 
  }
} 
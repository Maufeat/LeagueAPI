#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyPlayerDto.hpp>"

namespace leagueapi {
  struct LolLobbyPlayerCollectionDto { /**/ 
    std::vector<LolLobbyPlayerDto> players;/**/
  };
  static void to_json(json& j, const LolLobbyPlayerCollectionDto& v) { 
    j["players"] = v.players;
  }
  static void from_json(const json& j, LolLobbyPlayerCollectionDto& v) { 
    v.players = j.at("players").get<std::vector<LolLobbyPlayerDto>>(); 
  }
} 
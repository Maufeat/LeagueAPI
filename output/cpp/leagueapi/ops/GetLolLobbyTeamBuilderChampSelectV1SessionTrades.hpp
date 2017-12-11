#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>> GetLolLobbyTeamBuilderChampSelectV1SessionTrades (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/session/trades?", { 
    }, { 
    }) };
  }
} 
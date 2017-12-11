#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectTradeContract> GetLolLobbyTeamBuilderChampSelectV1SessionTradesById (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 
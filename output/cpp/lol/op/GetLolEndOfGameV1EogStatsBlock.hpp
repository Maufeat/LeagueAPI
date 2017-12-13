#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEndOfGameEndOfGameStats.hpp>
namespace lol {
  Result<LolEndOfGameEndOfGameStats> GetLolEndOfGameV1EogStatsBlock(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-end-of-game/v1/eog-stats-block?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
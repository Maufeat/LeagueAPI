#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolEndOfGameV1StateDismissStats(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-end-of-game/v1/state/dismiss-stats?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
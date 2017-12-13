#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolMatchmakingV1Search(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-matchmaking/v1/search?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
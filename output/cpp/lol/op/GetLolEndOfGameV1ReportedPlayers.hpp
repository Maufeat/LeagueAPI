#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<uint64_t>> GetLolEndOfGameV1ReportedPlayers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-end-of-game/v1/reported-players?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
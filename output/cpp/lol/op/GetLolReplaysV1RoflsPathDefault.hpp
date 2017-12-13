#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolReplaysV1RoflsPathDefault(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-replays/v1/rofls/path/default?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
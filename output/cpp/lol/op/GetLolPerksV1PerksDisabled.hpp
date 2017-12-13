#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<int32_t>> GetLolPerksV1PerksDisabled(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/perks/disabled?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PostLolLootV1Refresh(const LeagueClient& _client, const bool& force)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/refresh?" + SimpleWeb::QueryString::create(Args2Headers({ { "force", to_string(force) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
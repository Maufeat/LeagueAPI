#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameClientChatV1IgnoredSummoners(const LeagueClient& _client, const std::string& summonerName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-game-client-chat/v1/ignored-summoners?" + SimpleWeb::QueryString::create(Args2Headers({ { "summonerName", to_string(summonerName) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolGameflowV1SpectateLaunch(const LeagueClient& _client, const std::optional<std::string>& summonerName = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/spectate/launch?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(summonerName).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
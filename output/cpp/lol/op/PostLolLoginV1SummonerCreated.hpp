#pragma once
#include "../base_op.hpp" 
#include "../def/LolLoginSummonerCreatedResource.hpp"
namespace lol {
  inline Result<json> PostLolLoginV1SummonerCreated(const LeagueClient& _client, const LolLoginSummonerCreatedResource& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-login/v1/summoner-created?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerId).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
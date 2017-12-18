#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerProfileUpdate.hpp>
namespace lol {
  inline Result<json> PostLolSummonerV1CurrentSummonerSummonerProfile(const LeagueClient& _client, const LolSummonerSummonerProfileUpdate& body)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-summoner/v1/current-summoner/summoner-profile?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(body).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
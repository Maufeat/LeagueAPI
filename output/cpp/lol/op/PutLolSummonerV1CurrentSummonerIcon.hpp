#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerIcon.hpp>
#include <lol/def/LolSummonerSummoner.hpp>
namespace lol {
  inline Result<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon(const LeagueClient& _client, const LolSummonerSummonerIcon& body)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolSummonerSummoner> {
        _client_.request("put", "/lol-summoner/v1/current-summoner/icon?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(body).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummoner> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
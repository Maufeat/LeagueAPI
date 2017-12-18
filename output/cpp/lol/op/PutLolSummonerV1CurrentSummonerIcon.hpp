#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerIcon.hpp"
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon(LeagueClient& _client, const LolSummonerSummonerIcon& body)
  {
    try {
      return Result<LolSummonerSummoner> {
        _client.https.request("put", "/lol-summoner/v1/current-summoner/icon?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(body).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummoner> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolSummonerV1CurrentSummonerIcon(LeagueClient& _client, const LolSummonerSummonerIcon& body, std::function<void(LeagueClient&,const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("put", "/lol-summoner/v1/current-summoner/icon?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(body).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolSummonerSummoner> { response });
          else
            cb(_client,Result<LolSummonerSummoner> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
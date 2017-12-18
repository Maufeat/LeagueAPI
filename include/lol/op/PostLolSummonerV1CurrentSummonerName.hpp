#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerName(LeagueClient& _client, const std::string& name)
  {
    try {
      return ToResult<LolSummonerSummoner>(_client.https.request("post", "/lol-summoner/v1/current-summoner/name?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerSummoner>(e.code());
    }
  }
  inline void PostLolSummonerV1CurrentSummonerName(LeagueClient& _client, const std::string& name, std::function<void(LeagueClient&, const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("post", "/lol-summoner/v1/current-summoner/name?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerSummoner>(e));
            else
              cb(_client, ToResult<LolSummonerSummoner>(response));
        });
  }
}
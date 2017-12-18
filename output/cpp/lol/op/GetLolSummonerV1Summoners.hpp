#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<LolSummonerSummoner> GetLolSummonerV1Summoners(LeagueClient& _client, const std::string& name)
  {
    try {
      return Result<LolSummonerSummoner> {
        _client.https.request("get", "/lol-summoner/v1/summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummoner> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSummonerV1Summoners(LeagueClient& _client, const std::string& name, std::function<void(LeagueClient&,const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v1/summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolSummonerSummoner> { response });
          else
            cb(_client,Result<LolSummonerSummoner> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
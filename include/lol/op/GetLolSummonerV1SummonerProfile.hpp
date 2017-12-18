#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetLolSummonerV1SummonerProfile(LeagueClient& _client, const std::string& puuid)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/lol-summoner/v1/summoner-profile?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "puuid", to_string(puuid) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void GetLolSummonerV1SummonerProfile(LeagueClient& _client, const std::string& puuid, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v1/summoner-profile?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "puuid", to_string(puuid) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
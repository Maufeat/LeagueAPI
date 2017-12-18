#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerIdAndName.hpp"
namespace lol {
  inline Result<std::vector<LolSummonerSummonerIdAndName>> GetLolSummonerV2SummonerNames(LeagueClient& _client, const std::vector<uint64_t>& ids)
  {
    try {
      return Result<std::vector<LolSummonerSummonerIdAndName>> {
        _client.https.request("get", "/lol-summoner/v2/summoner-names?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSummonerSummonerIdAndName>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSummonerV2SummonerNames(LeagueClient& _client, const std::vector<uint64_t>& ids, std::function<void(LeagueClient&,const Result<std::vector<LolSummonerSummonerIdAndName>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v2/summoner-names?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolSummonerSummonerIdAndName>> { response });
          else
            cb(_client,Result<std::vector<LolSummonerSummonerIdAndName>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
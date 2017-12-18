#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerIdAndIcon.hpp"
namespace lol {
  inline Result<std::vector<LolSummonerSummonerIdAndIcon>> GetLolSummonerV2SummonerIcons(LeagueClient& _client, const std::vector<uint64_t>& ids)
  {
    try {
      return Result<std::vector<LolSummonerSummonerIdAndIcon>> {
        _client.https.request("get", "/lol-summoner/v2/summoner-icons?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSummonerSummonerIdAndIcon>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSummonerV2SummonerIcons(LeagueClient& _client, const std::vector<uint64_t>& ids, std::function<void(LeagueClient&,const Result<std::vector<LolSummonerSummonerIdAndIcon>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v2/summoner-icons?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolSummonerSummonerIdAndIcon>> { response });
          else
            cb(_client,Result<std::vector<LolSummonerSummonerIdAndIcon>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
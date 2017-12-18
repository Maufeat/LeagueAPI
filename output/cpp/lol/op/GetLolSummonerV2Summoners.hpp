#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<std::vector<LolSummonerSummoner>> GetLolSummonerV2Summoners(LeagueClient& _client, const std::optional<std::string>& name = std::nullopt, const std::optional<std::vector<uint64_t>>& ids = std::nullopt)
  {
    try {
      return Result<std::vector<LolSummonerSummoner>> {
        _client.https.request("get", "/lol-summoner/v2/summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) },
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSummonerSummoner>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSummonerV2Summoners(LeagueClient& _client, const std::optional<std::string>& name = std::nullopt, const std::optional<std::vector<uint64_t>>& ids = std::nullopt, std::function<void(LeagueClient&,const Result<std::vector<LolSummonerSummoner>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v2/summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) },
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolSummonerSummoner>> { response });
          else
            cb(_client,Result<std::vector<LolSummonerSummoner>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
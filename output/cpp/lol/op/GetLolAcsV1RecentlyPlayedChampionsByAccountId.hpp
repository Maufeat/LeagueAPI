#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAcsAcsChampionGamesCollection.hpp"
namespace lol {
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV1RecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    try {
      return Result<LolAcsAcsChampionGamesCollection> {
        _client.https.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAcsAcsChampionGamesCollection> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolAcsV1RecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force, std::function<void(LeagueClient&,const Result<LolAcsAcsChampionGamesCollection>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolAcsAcsChampionGamesCollection> { response });
          else
            cb(_client,Result<LolAcsAcsChampionGamesCollection> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
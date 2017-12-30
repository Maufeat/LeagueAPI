#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAcsAcsChampionGamesCollection.hpp"
namespace lol {
  template<typename T>
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV1RecentlyPlayedChampionsByAccountId(T& _client, const uint64_t& accountId, const bool& force)
  {
    try {
      return ToResult<LolAcsAcsChampionGamesCollection>(_client.https.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "force", to_string(force) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAcsAcsChampionGamesCollection>(e.code());
    }
  }
  template<typename T>
  inline void GetLolAcsV1RecentlyPlayedChampionsByAccountId(T& _client, const uint64_t& accountId, const bool& force, std::function<void(T&, const Result<LolAcsAcsChampionGamesCollection>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "force", to_string(force) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAcsAcsChampionGamesCollection>(e));
            else
              cb(_client, ToResult<LolAcsAcsChampionGamesCollection>(response));
        });
  }
}
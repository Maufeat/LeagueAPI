#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAcsAcsChampionGamesCollection.hpp"
namespace lol {
  template<typename T>
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV2RecentlyPlayedChampionsCurrentSummoner(T& _client, const bool& force)
  {
    try {
      return ToResult<LolAcsAcsChampionGamesCollection>(_client.https.request("get", "/lol-acs/v2/recently-played-champions/current-summoner?" +
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
  inline void GetLolAcsV2RecentlyPlayedChampionsCurrentSummoner(T& _client, const bool& force, std::function<void(T&, const Result<LolAcsAcsChampionGamesCollection>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v2/recently-played-champions/current-summoner?" +
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
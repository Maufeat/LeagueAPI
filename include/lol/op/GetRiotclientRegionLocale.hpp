#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RegionLocale.hpp"
namespace lol {
  inline Result<RegionLocale> GetRiotclientRegionLocale(LeagueClient& _client)
  {
    try {
      return ToResult<RegionLocale>(_client.https.request("get", "/riotclient/region-locale?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RegionLocale>(e.code());
    }
  }
  inline void GetRiotclientRegionLocale(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RegionLocale>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/region-locale?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RegionLocale>(e));
            else
              cb(_client, ToResult<RegionLocale>(response));
        });
  }
}
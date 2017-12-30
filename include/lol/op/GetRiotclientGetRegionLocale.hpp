#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RegionLocale.hpp"
namespace lol {
  template<typename T>
  inline Result<RegionLocale> GetRiotclientGetRegionLocale(T& _client)
  {
    try {
      return ToResult<RegionLocale>(_client.https.request("get", "/riotclient/get_region_locale?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RegionLocale>(e.code());
    }
  }
  template<typename T>
  inline void GetRiotclientGetRegionLocale(T& _client, std::function<void(T&, const Result<RegionLocale>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/get_region_locale?" +
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
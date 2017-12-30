#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostRiotclientSetRegionLocale(T& _client, const std::string& region, const std::string& locale)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/riotclient/set_region_locale?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "region", to_string(region) },
          { "locale", to_string(locale) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostRiotclientSetRegionLocale(T& _client, const std::string& region, const std::string& locale, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/set_region_locale?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "region", to_string(region) },
          { "locale", to_string(locale) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
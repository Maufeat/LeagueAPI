#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostRiotclientSetRegionLocale(LeagueClient& _client, const std::string& region, const std::string& locale)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/riotclient/set_region_locale?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "region", to_string(region) },
          { "locale", to_string(locale) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostRiotclientSetRegionLocale(LeagueClient& _client, const std::string& region, const std::string& locale, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/set_region_locale?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "region", to_string(region) },
          { "locale", to_string(locale) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
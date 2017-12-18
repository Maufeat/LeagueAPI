#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostRiotclientSetRegionLocale(LeagueClient& _client, const std::string& region, const std::string& locale)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/riotclient/set_region_locale?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "region", to_string(region) },
           { "locale", to_string(locale) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRiotclientSetRegionLocale(LeagueClient& _client, const std::string& region, const std::string& locale, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/set_region_locale?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "region", to_string(region) },
           { "locale", to_string(locale) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
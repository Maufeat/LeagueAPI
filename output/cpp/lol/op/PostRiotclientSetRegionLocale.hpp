#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostRiotclientSetRegionLocale(const LeagueClient& _client, const std::string& region, const std::string& locale)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/set_region_locale?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "region", to_string(region) },
           { "locale", to_string(locale) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
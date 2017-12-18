#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RegionLocale.hpp"
namespace lol {
  inline Result<RegionLocale> GetRiotclientGetRegionLocale(LeagueClient& _client)
  {
    try {
      return Result<RegionLocale> {
        _client.https.request("get", "/riotclient/get_region_locale?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RegionLocale> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotclientGetRegionLocale(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RegionLocale>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/get_region_locale?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RegionLocale> { response });
          else
            cb(_client,Result<RegionLocale> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
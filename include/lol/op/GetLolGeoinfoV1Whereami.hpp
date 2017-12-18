#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGeoinfoGeoInfoResponse.hpp"
namespace lol {
  inline Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(LeagueClient& _client)
  {
    try {
      return ToResult<LolGeoinfoGeoInfoResponse>(_client.https.request("get", "/lol-geoinfo/v1/whereami?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGeoinfoGeoInfoResponse>(e.code());
    }
  }
  inline void GetLolGeoinfoV1Whereami(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolGeoinfoGeoInfoResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-geoinfo/v1/whereami?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGeoinfoGeoInfoResponse>(e));
            else
              cb(_client, ToResult<LolGeoinfoGeoInfoResponse>(response));
        });
  }
}
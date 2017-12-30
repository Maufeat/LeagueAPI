#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGeoinfoGeoInfoResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(T& _client)
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
  template<typename T>
  inline void GetLolGeoinfoV1Whereami(T& _client, std::function<void(T&, const Result<LolGeoinfoGeoInfoResponse>&)> cb)
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
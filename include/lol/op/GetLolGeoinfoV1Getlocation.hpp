#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGeoinfoGeoInfo.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGeoinfoGeoInfo> GetLolGeoinfoV1Getlocation(T& _client, const std::string& ip_address)
  {
    try {
      return ToResult<LolGeoinfoGeoInfo>(_client.https.request("get", "/lol-geoinfo/v1/getlocation?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "ip_address", to_string(ip_address) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGeoinfoGeoInfo>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGeoinfoV1Getlocation(T& _client, const std::string& ip_address, std::function<void(T&, const Result<LolGeoinfoGeoInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-geoinfo/v1/getlocation?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "ip_address", to_string(ip_address) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGeoinfoGeoInfo>(e));
            else
              cb(_client, ToResult<LolGeoinfoGeoInfo>(response));
        });
  }
}
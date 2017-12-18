#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGeoinfoGeoInfo.hpp"
namespace lol {
  inline Result<LolGeoinfoGeoInfo> GetLolGeoinfoV1Getlocation(LeagueClient& _client, const std::string& ip_address)
  {
    try {
      return Result<LolGeoinfoGeoInfo> {
        _client.https.request("get", "/lol-geoinfo/v1/getlocation?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "ip_address", to_string(ip_address) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGeoinfoGeoInfo> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGeoinfoV1Getlocation(LeagueClient& _client, const std::string& ip_address, std::function<void(LeagueClient&,const Result<LolGeoinfoGeoInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-geoinfo/v1/getlocation?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "ip_address", to_string(ip_address) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGeoinfoGeoInfo> { response });
          else
            cb(_client,Result<LolGeoinfoGeoInfo> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
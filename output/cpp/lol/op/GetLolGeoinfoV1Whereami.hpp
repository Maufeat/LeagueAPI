#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGeoinfoGeoInfoResponse.hpp"
namespace lol {
  inline Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(LeagueClient& _client)
  {
    try {
      return Result<LolGeoinfoGeoInfoResponse> {
        _client.https.request("get", "/lol-geoinfo/v1/whereami?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGeoinfoGeoInfoResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGeoinfoV1Whereami(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolGeoinfoGeoInfoResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-geoinfo/v1/whereami?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGeoinfoGeoInfoResponse> { response });
          else
            cb(_client,Result<LolGeoinfoGeoInfoResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
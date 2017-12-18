#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGeoinfoGeoInfoResponse.hpp>
namespace lol {
  inline Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGeoinfoGeoInfoResponse> {
        _client_.request("get", "/lol-geoinfo/v1/whereami?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGeoinfoGeoInfoResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
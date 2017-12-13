#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGeoinfoGeoInfoResponse.hpp>
namespace lol {
  Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-geoinfo/v1/whereami?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
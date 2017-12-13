#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGeoinfoGeoInfo.hpp>
namespace lol {
  Result<LolGeoinfoGeoInfo> GetLolGeoinfoV1Getlocation(const LeagueClient& _client, const std::string& ip_address)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-geoinfo/v1/getlocation?" + SimpleWeb::QueryString::create(Args2Headers({ { "ip_address", to_string(ip_address) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
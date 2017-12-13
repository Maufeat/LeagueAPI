#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RegionLocale.hpp>
namespace lol {
  Result<RegionLocale> GetRiotclientRegionLocale(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/region-locale?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RegionLocale.hpp>
namespace lol {
  Result<void> PutRiotclientRegionLocale(const LeagueClient& _client, const RegionLocale& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/riotclient/region-locale?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
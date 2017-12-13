#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RegionLocale.hpp>
namespace lol {
  Result<RegionLocale> GetRiotclientGetRegionLocale(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/get_region_locale?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
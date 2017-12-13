#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksServiceSettings.hpp>
namespace lol {
  Result<LolPerksServiceSettings> GetLolPerksV1Servicesettings(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/servicesettings?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
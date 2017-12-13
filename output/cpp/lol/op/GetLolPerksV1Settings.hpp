#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksUISettings.hpp>
namespace lol {
  Result<LolPerksUISettings> GetLolPerksV1Settings(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/settings?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
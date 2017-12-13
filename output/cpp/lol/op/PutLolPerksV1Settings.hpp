#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksUISettings.hpp>
namespace lol {
  Result<json> PutLolPerksV1Settings(const LeagueClient& _client, const LolPerksUISettings& showLongDescriptions)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-perks/v1/settings?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(showLongDescriptions).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
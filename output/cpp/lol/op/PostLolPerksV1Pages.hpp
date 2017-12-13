#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  Result<LolPerksPerkPageResource> PostLolPerksV1Pages(const LeagueClient& _client, const LolPerksPerkPageResource& page)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-perks/v1/pages?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(page).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
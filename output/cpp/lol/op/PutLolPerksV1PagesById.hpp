#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  Result<json> PutLolPerksV1PagesById(const LeagueClient& _client, const int32_t& id, const LolPerksPerkPageResource& page)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-perks/v1/pages/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(page).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
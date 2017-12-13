#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLoadoutsV2ItemsById(const LeagueClient& _client, const uint32_t& id, const std::map<std::string, json>& items)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loadouts/v2/items/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(items).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
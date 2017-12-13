#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PutLolPerksV1Currentpage(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-perks/v1/currentpage?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(id).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
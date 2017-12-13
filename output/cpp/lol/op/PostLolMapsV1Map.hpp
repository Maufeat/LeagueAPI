#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMapsMaps.hpp>
namespace lol {
  Result<void> PostLolMapsV1Map(const LeagueClient& _client, const LolMapsMaps& map)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-maps/v1/map?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(map).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
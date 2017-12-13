#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPftPFTEvent.hpp>
namespace lol {
  Result<json> PostLolPftV2Events(const LeagueClient& _client, const LolPftPFTEvent& pftEvent)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-pft/v2/events?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(pftEvent).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
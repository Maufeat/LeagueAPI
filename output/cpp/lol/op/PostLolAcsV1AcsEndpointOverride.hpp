#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAcsAcsEndPoint.hpp>
namespace lol {
  Result<json> PostLolAcsV1AcsEndpointOverride(const LeagueClient& _client, const LolAcsAcsEndPoint& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-acs/v1/acs-endpoint-override?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2ApiHonorPlayerServerRequest.hpp>
namespace lol {
  Result<std::string> PostLolHonorV2V1HonorPlayer(const LeagueClient& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-honor-v2/v1/honor-player?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(honorPlayerRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
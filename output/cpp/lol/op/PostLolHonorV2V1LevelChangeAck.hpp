#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolHonorV2V1LevelChangeAck(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-honor-v2/v1/level-change/ack?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
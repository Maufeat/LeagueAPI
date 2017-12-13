#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolGameflowV1WatchLaunch(const LeagueClient& _client, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/watch/launch?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(args).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
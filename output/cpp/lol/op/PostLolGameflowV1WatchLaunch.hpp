#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolGameflowV1WatchLaunch(const LeagueClient& _client, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-gameflow/v1/watch/launch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(args).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
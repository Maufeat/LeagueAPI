#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientNewArgs(const LeagueClient& _client, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/new-args?" + SimpleWeb::QueryString::create(Args2Headers({  })), Args2String({ { "args", to_string(args) } }),
    Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/x-www-form-urlencoded"},  }) );
  }
}
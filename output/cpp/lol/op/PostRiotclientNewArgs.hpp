#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostRiotclientNewArgs(const LeagueClient& _client, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/new-args?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          Args2String({ 
           { "args", to_string(args) }, }),
          Args2Headers({
            {"content-type", "application/x-www-form-urlencoded"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
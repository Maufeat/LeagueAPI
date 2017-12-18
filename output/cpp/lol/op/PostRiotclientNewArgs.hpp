#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostRiotclientNewArgs(LeagueClient& _client, const std::vector<std::string>& args)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/riotclient/new-args?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          Args2String({ 
           { "args", to_string(args) }, }),
          Args2Headers({
            {"content-type", "application/x-www-form-urlencoded"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRiotclientNewArgs(LeagueClient& _client, const std::vector<std::string>& args, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/new-args?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          Args2String({ 
           { "args", to_string(args) }, }),
          Args2Headers({
            {"content-type", "application/x-www-form-urlencoded"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
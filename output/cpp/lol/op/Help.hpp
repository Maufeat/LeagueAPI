#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RemotingHelpFormat.hpp"
namespace lol {
  inline Result<json> Help(LeagueClient& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/Help?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "target", to_string(target) },
           { "format", to_string(format) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void Help(LeagueClient& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/Help?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "target", to_string(target) },
           { "format", to_string(format) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
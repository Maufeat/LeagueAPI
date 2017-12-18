#pragma once
#include "../base_op.hpp" 
#include "../def/RemotingHelpFormat.hpp"
namespace lol {
  inline Result<json> Help(const LeagueClient& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/Help?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "target", to_string(target) },
           { "format", to_string(format) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/RemotingSerializedFormat.hpp"
namespace lol {
  inline Result<json> WebSocketFormat(const LeagueClient& _client, const std::optional<RemotingSerializedFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/WebSocketFormat?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
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
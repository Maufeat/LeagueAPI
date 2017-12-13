#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RemotingSerializedFormat.hpp>
namespace lol {
  Result<json> WebSocketFormat(const LeagueClient& _client, const std::optional<RemotingSerializedFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/WebSocketFormat?" + SimpleWeb::QueryString::create(Args2Headers({ { "format", to_string(format) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
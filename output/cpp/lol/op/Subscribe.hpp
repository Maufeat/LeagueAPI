#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RemotingSerializedFormat.hpp>
namespace lol {
  Result<json> Subscribe(const LeagueClient& _client, const std::string& eventName, const std::optional<RemotingSerializedFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/Subscribe?" + SimpleWeb::QueryString::create(Args2Headers({ { "eventName", to_string(eventName) },
    { "format", to_string(format) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
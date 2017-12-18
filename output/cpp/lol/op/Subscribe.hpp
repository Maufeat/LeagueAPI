#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RemotingSerializedFormat.hpp>
namespace lol {
  inline Result<json> Subscribe(const LeagueClient& _client, const std::string& eventName, const std::optional<RemotingSerializedFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/Subscribe?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "eventName", to_string(eventName) },
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
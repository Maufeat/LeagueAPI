#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginLcdsResponse.hpp>
namespace lol {
  Result<LolLoginLcdsResponse> PostLolLoginV1SessionInvoke(const LeagueClient& _client, const std::string& destination, const std::string& method, const std::vector<json>& args)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLoginLcdsResponse> {
        _client_.request("post", "/lol-login/v1/session/invoke?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "destination", to_string(destination) },
           { "method", to_string(method) }, })), 
          Args2String({ 
           { "args", to_string(args) }, }),
          Args2Headers({
            {"content-type", "application/x-www-form-urlencoded"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginLcdsResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolAcsAcsEndPoint.hpp"
namespace lol {
  inline Result<json> PostLolAcsV1AcsEndpointOverride(const LeagueClient& _client, const LolAcsAcsEndPoint& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-acs/v1/acs-endpoint-override?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PutRiotclientV1BugsplatPlatformId(const LeagueClient& _client, const std::string& platformId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/riotclient/v1/bugsplat/platform-id?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(platformId).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
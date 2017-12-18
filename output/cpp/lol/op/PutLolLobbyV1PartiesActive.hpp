#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PutLolLobbyV1PartiesActive(const LeagueClient& _client, const int32_t& active)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/lol-lobby/v1/parties/active?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(active).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
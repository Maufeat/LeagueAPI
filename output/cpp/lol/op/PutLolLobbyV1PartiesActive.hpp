#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PutLolLobbyV1PartiesActive(LeagueClient& _client, const int32_t& active)
  {
    try {
      return Result<void> {
        _client.https.request("put", "/lol-lobby/v1/parties/active?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(active).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolLobbyV1PartiesActive(LeagueClient& _client, const int32_t& active, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v1/parties/active?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(active).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
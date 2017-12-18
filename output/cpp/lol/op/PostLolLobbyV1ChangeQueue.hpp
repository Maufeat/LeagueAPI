#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyChangeQueue.hpp"
#include "../def/LolLobbyLobby.hpp"
namespace lol {
  inline Result<LolLobbyLobby> PostLolLobbyV1ChangeQueue(LeagueClient& _client, const LolLobbyLobbyChangeQueue& queueId)
  {
    try {
      return Result<LolLobbyLobby> {
        _client.https.request("post", "/lol-lobby/v1/change-queue?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(queueId).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobby> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyV1ChangeQueue(LeagueClient& _client, const LolLobbyLobbyChangeQueue& queueId, std::function<void(LeagueClient&,const Result<LolLobbyLobby>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/change-queue?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(queueId).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobby> { response });
          else
            cb(_client,Result<LolLobbyLobby> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
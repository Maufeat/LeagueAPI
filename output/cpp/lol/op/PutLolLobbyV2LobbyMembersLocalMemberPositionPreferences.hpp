#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyPositionPreferences.hpp"
namespace lol {
  inline Result<json> PutLolLobbyV2LobbyMembersLocalMemberPositionPreferences(LeagueClient& _client, const LolLobbyLobbyPositionPreferences& positionPreferences)
  {
    try {
      return Result<json> {
        _client.https.request("put", "/lol-lobby/v2/lobby/members/localMember/position-preferences?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(positionPreferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolLobbyV2LobbyMembersLocalMemberPositionPreferences(LeagueClient& _client, const LolLobbyLobbyPositionPreferences& positionPreferences, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v2/lobby/members/localMember/position-preferences?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(positionPreferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
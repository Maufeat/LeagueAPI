#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyPositionPreferences.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PutLolLobbyV1LobbyMembersLocalMemberPositionPreferences(T& _client, const LolLobbyLobbyPositionPreferences& positionPreferences)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/lol-lobby/v1/lobby/members/localMember/position-preferences?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(positionPreferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PutLolLobbyV1LobbyMembersLocalMemberPositionPreferences(T& _client, const LolLobbyLobbyPositionPreferences& positionPreferences, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v1/lobby/members/localMember/position-preferences?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(positionPreferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectAction.hpp"
namespace lol {
  inline Result<json> PatchLolLobbyTeamBuilderChampSelectV1SessionActionsById(LeagueClient& _client, const int32_t& id, const LolLobbyTeamBuilderChampSelectAction& data)
  {
    try {
      return Result<json> {
        _client.https.request("patch", "/lol-lobby-team-builder/champ-select/v1/session/actions/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PatchLolLobbyTeamBuilderChampSelectV1SessionActionsById(LeagueClient& _client, const int32_t& id, const LolLobbyTeamBuilderChampSelectAction& data, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-lobby-team-builder/champ-select/v1/session/actions/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
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
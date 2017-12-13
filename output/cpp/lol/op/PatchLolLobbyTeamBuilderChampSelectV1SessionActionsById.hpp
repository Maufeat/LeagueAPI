#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectAction.hpp>
namespace lol {
  Result<json> PatchLolLobbyTeamBuilderChampSelectV1SessionActionsById(const LeagueClient& _client, const int32_t& id, const LolLobbyTeamBuilderChampSelectAction& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-lobby-team-builder/champ-select/v1/session/actions/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
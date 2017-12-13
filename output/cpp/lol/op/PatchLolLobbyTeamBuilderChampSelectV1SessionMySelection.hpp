#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectMySelection.hpp>
namespace lol {
  Result<json> PatchLolLobbyTeamBuilderChampSelectV1SessionMySelection(const LeagueClient& _client, const LolLobbyTeamBuilderChampSelectMySelection& selection)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-lobby-team-builder/champ-select/v1/session/my-selection?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(selection).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
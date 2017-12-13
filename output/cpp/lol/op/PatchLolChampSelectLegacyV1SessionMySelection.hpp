#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectMySelection.hpp>
namespace lol {
  Result<json> PatchLolChampSelectLegacyV1SessionMySelection(const LeagueClient& _client, const LolChampSelectLegacyChampSelectMySelection& selection)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-champ-select-legacy/v1/session/my-selection?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(selection).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
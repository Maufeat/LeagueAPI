#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectAction.hpp>
namespace lol {
  Result<json> PatchLolChampSelectV1SessionActionsById(const LeagueClient& _client, const uint64_t& id, const LolChampSelectChampSelectAction& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-champ-select/v1/session/actions/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
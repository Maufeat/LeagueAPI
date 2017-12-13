#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolChampSelectLegacyV1SessionActionsByIdComplete(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-champ-select-legacy/v1/session/actions/"+to_string(id)+"/complete?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
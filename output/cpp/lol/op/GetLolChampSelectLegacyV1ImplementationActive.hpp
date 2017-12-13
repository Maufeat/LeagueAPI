#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolChampSelectLegacyV1ImplementationActive(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select-legacy/v1/implementation-active?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
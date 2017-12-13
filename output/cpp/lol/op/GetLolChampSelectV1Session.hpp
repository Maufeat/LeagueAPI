#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectSession.hpp>
namespace lol {
  Result<LolChampSelectChampSelectSession> GetLolChampSelectV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select/v1/session?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
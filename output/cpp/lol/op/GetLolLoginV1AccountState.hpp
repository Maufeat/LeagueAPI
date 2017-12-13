#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginAccountStateResource.hpp>
namespace lol {
  Result<LolLoginAccountStateResource> GetLolLoginV1AccountState(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-login/v1/account-state?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolLoginAccountStateResource.hpp"
namespace lol {
  inline Result<LolLoginAccountStateResource> GetLolLoginV1AccountState(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLoginAccountStateResource> {
        _client_.request("get", "/lol-login/v1/account-state?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginAccountStateResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> GetLolLasToxicityV1AccountsByAccountId(const LeagueClient& _client, const uint64_t& accountId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-las-toxicity/v1/accounts/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
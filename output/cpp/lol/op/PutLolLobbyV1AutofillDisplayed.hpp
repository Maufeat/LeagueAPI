#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<bool> PutLolLobbyV1AutofillDisplayed(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<bool> {
        _client_.request("put", "/lol-lobby/v1/autofill-displayed?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
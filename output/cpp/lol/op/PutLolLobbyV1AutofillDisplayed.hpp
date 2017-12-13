#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> PutLolLobbyV1AutofillDisplayed(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-lobby/v1/autofill-displayed?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
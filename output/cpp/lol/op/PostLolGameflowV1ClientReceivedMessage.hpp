#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameflowV1ClientReceivedMessage(const LeagueClient& _client, const std::string& messsage)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/client-received-message?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(messsage).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
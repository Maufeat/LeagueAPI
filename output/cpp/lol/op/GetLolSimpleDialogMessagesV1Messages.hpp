#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSimpleDialogMessagesMessage.hpp>
namespace lol {
  Result<std::vector<LolSimpleDialogMessagesMessage>> GetLolSimpleDialogMessagesV1Messages(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-simple-dialog-messages/v1/messages?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
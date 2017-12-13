#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSimpleDialogMessagesLocalMessageRequest.hpp>
namespace lol {
  Result<json> PostLolSimpleDialogMessagesV1Messages(const LeagueClient& _client, const LolSimpleDialogMessagesLocalMessageRequest& messageRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-simple-dialog-messages/v1/messages?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(messageRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
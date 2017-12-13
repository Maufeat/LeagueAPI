#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSimpleDialogMessagesMessage.hpp>
namespace lol {
  Result<std::vector<LolSimpleDialogMessagesMessage>> GetLolSimpleDialogMessagesV1Messages(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolSimpleDialogMessagesMessage>> {
        _client_.request("get", "/lol-simple-dialog-messages/v1/messages?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSimpleDialogMessagesMessage>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
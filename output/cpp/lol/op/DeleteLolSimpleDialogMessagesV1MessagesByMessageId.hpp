#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolSimpleDialogMessagesV1MessagesByMessageId(const LeagueClient& _client, const int64_t& messageId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-simple-dialog-messages/v1/messages/"+to_string(messageId)+"?" +
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
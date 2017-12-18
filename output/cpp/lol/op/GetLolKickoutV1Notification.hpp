#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/KickoutMessage.hpp"
namespace lol {
  inline Result<KickoutMessage> GetLolKickoutV1Notification(LeagueClient& _client)
  {
    try {
      return Result<KickoutMessage> {
        _client.https.request("get", "/lol-kickout/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<KickoutMessage> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolKickoutV1Notification(LeagueClient& _client, std::function<void(LeagueClient&,const Result<KickoutMessage>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kickout/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<KickoutMessage> { response });
          else
            cb(_client,Result<KickoutMessage> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
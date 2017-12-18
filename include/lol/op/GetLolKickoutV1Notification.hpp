#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/KickoutMessage.hpp"
namespace lol {
  inline Result<KickoutMessage> GetLolKickoutV1Notification(LeagueClient& _client)
  {
    try {
      return ToResult<KickoutMessage>(_client.https.request("get", "/lol-kickout/v1/notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<KickoutMessage>(e.code());
    }
  }
  inline void GetLolKickoutV1Notification(LeagueClient& _client, std::function<void(LeagueClient&, const Result<KickoutMessage>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kickout/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<KickoutMessage>(e));
            else
              cb(_client, ToResult<KickoutMessage>(response));
        });
  }
}
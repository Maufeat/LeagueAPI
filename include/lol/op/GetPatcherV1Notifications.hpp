#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherNotification.hpp"
namespace lol {
  inline Result<std::vector<PatcherNotification>> GetPatcherV1Notifications(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<PatcherNotification>>(_client.https.request("get", "/patcher/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PatcherNotification>>(e.code());
    }
  }
  inline void GetPatcherV1Notifications(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<PatcherNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PatcherNotification>>(e));
            else
              cb(_client, ToResult<std::vector<PatcherNotification>>(response));
        });
  }
}
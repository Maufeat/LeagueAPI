#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthDeviceId.hpp"
namespace lol {
  inline Result<RsoAuthDeviceId> PostRsoAuthV1DeviceId(LeagueClient& _client)
  {
    try {
      return ToResult<RsoAuthDeviceId>(_client.https.request("post", "/rso-auth/v1/device-id?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthDeviceId>(e.code());
    }
  }
  inline void PostRsoAuthV1DeviceId(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RsoAuthDeviceId>&)> cb)
  {
    _client.httpsa.request("post", "/rso-auth/v1/device-id?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthDeviceId>(e));
            else
              cb(_client, ToResult<RsoAuthDeviceId>(response));
        });
  }
}
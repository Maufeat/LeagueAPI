#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthDeviceId.hpp>
namespace lol {
  Result<RsoAuthDeviceId> PostRsoAuthV1DeviceId(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthDeviceId> {
        _client_.request("post", "/rso-auth/v1/device-id?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthDeviceId> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthDeviceId.hpp>
namespace lol {
  Result<RsoAuthDeviceId> PostRsoAuthV1DeviceId(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/rso-auth/v1/device-id?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
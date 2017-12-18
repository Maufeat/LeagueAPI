#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationDeviceResponse.hpp"
namespace lol {
  inline Result<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device(LeagueClient& _client)
  {
    try {
      return Result<LolAccountVerificationDeviceResponse> {
        _client.https.request("get", "/lol-account-verification/v1/device?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationDeviceResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolAccountVerificationV1Device(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolAccountVerificationDeviceResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-account-verification/v1/device?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolAccountVerificationDeviceResponse> { response });
          else
            cb(_client,Result<LolAccountVerificationDeviceResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
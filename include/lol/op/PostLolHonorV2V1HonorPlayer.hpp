#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2ApiHonorPlayerServerRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<std::string> PostLolHonorV2V1HonorPlayer(T& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest)
  {
    try {
      return ToResult<std::string>(_client.https.request("post", "/lol-honor-v2/v1/honor-player?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(honorPlayerRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  template<typename T>
  inline void PostLolHonorV2V1HonorPlayer(T& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest, std::function<void(T&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-honor-v2/v1/honor-player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(honorPlayerRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}
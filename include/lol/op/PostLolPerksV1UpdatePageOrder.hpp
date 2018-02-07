#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksUpdatePageOrderRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolPerksV1UpdatePageOrder(T& _client, const LolPerksUpdatePageOrderRequest& request)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-perks/v1/update-page-order?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPerksV1UpdatePageOrder(T& _client, const LolPerksUpdatePageOrderRequest& request, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-perks/v1/update-page-order?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
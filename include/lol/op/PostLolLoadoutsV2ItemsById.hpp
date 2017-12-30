#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> PostLolLoadoutsV2ItemsById(T& _client, const uint32_t& id, const std::map<std::string, json>& items)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(items).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLoadoutsV2ItemsById(T& _client, const uint32_t& id, const std::map<std::string, json>& items, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(items).dump(),
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
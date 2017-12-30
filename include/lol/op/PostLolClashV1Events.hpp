#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClashEventData.hpp"
namespace lol {
  template<typename T>
  inline Result<std::map<std::string, ClashEventData>> PostLolClashV1Events(T& _client, const std::vector<std::string>& uuids)
  {
    try {
      return ToResult<std::map<std::string, ClashEventData>>(_client.https.request("post", "/lol-clash/v1/events?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(uuids).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::map<std::string, ClashEventData>>(e.code());
    }
  }
  template<typename T>
  inline void PostLolClashV1Events(T& _client, const std::vector<std::string>& uuids, std::function<void(T&, const Result<std::map<std::string, ClashEventData>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clash/v1/events?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(uuids).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::map<std::string, ClashEventData>>(e));
            else
              cb(_client, ToResult<std::map<std::string, ClashEventData>>(response));
        });
  }
}
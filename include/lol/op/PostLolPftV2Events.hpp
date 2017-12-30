#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPftPFTEvent.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolPftV2Events(T& _client, const LolPftPFTEvent& pftEvent)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-pft/v2/events?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(pftEvent).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPftV2Events(T& _client, const LolPftPFTEvent& pftEvent, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-pft/v2/events?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(pftEvent).dump(),
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
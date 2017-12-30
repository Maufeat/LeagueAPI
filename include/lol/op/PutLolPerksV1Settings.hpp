#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksUISettings.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PutLolPerksV1Settings(T& _client, const LolPerksUISettings& showLongDescriptions)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/lol-perks/v1/settings?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(showLongDescriptions).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PutLolPerksV1Settings(T& _client, const LolPerksUISettings& showLongDescriptions, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-perks/v1/settings?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(showLongDescriptions).dump(),
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
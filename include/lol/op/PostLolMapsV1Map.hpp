#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolMapsV1Map(T& _client, const LolMapsMaps& map)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-maps/v1/map?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(map).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolMapsV1Map(T& _client, const LolMapsMaps& map, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-maps/v1/map?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(map).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
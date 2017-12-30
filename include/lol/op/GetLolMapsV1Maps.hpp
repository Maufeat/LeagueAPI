#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolMapsMaps>> GetLolMapsV1Maps(T& _client)
  {
    try {
      return ToResult<std::vector<LolMapsMaps>>(_client.https.request("get", "/lol-maps/v1/maps?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolMapsMaps>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMapsV1Maps(T& _client, std::function<void(T&, const Result<std::vector<LolMapsMaps>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v1/maps?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolMapsMaps>>(e));
            else
              cb(_client, ToResult<std::vector<LolMapsMaps>>(response));
        });
  }
}
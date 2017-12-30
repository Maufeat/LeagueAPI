#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMapsMaps> GetLolMapsV1MapById(T& _client, const int64_t& id)
  {
    try {
      return ToResult<LolMapsMaps>(_client.https.request("get", "/lol-maps/v1/map/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMapsMaps>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMapsV1MapById(T& _client, const int64_t& id, std::function<void(T&, const Result<LolMapsMaps>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v1/map/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMapsMaps>(e));
            else
              cb(_client, ToResult<LolMapsMaps>(response));
        });
  }
}
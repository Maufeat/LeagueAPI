#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderNetworkConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<RecofrienderNetworkConfig> GetRecofrienderV1ConfigByNetwork(T& _client, const std::string& network)
  {
    try {
      return ToResult<RecofrienderNetworkConfig>(_client.https.request("get", "/recofriender/v1/config/"+to_string(network)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderNetworkConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetRecofrienderV1ConfigByNetwork(T& _client, const std::string& network, std::function<void(T&, const Result<RecofrienderNetworkConfig>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/config/"+to_string(network)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderNetworkConfig>(e));
            else
              cb(_client, ToResult<RecofrienderNetworkConfig>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/NetworkTestingNetworkExperimentsResource.hpp"
namespace lol {
  template<typename T>
  inline Result<NetworkTestingNetworkExperimentsResource> GetNetworkTestingV1Experiments(T& _client)
  {
    try {
      return ToResult<NetworkTestingNetworkExperimentsResource>(_client.https.request("get", "/network-testing/v1/experiments?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<NetworkTestingNetworkExperimentsResource>(e.code());
    }
  }
  template<typename T>
  inline void GetNetworkTestingV1Experiments(T& _client, std::function<void(T&, const Result<NetworkTestingNetworkExperimentsResource>&)> cb)
  {
    _client.httpsa.request("get", "/network-testing/v1/experiments?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<NetworkTestingNetworkExperimentsResource>(e));
            else
              cb(_client, ToResult<NetworkTestingNetworkExperimentsResource>(response));
        });
  }
}
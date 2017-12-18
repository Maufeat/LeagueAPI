#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/NetworkExperimentsResource.hpp"
namespace lol {
  inline Result<NetworkExperimentsResource> GetNetworkTestingV1Experiments(LeagueClient& _client)
  {
    try {
      return ToResult<NetworkExperimentsResource>(_client.https.request("get", "/network-testing/v1/experiments?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<NetworkExperimentsResource>(e.code());
    }
  }
  inline void GetNetworkTestingV1Experiments(LeagueClient& _client, std::function<void(LeagueClient&, const Result<NetworkExperimentsResource>&)> cb)
  {
    _client.httpsa.request("get", "/network-testing/v1/experiments?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<NetworkExperimentsResource>(e));
            else
              cb(_client, ToResult<NetworkExperimentsResource>(response));
        });
  }
}
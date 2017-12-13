#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/NetworkExperimentsResource.hpp>
namespace lol {
  Result<NetworkExperimentsResource> GetNetworkTestingV1Experiments(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<NetworkExperimentsResource> {
        _client_.request("get", "/network-testing/v1/experiments?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<NetworkExperimentsResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
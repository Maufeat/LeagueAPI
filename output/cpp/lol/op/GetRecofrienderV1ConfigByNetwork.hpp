#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderNetworkConfig.hpp>
namespace lol {
  Result<RecofrienderNetworkConfig> GetRecofrienderV1ConfigByNetwork(const LeagueClient& _client, const std::string& network)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderNetworkConfig> {
        _client_.request("get", "/recofriender/v1/config/"+to_string(network)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderNetworkConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderNetworkConfig.hpp"
namespace lol {
  inline Result<RecofrienderNetworkConfig> GetRecofrienderV1ConfigByNetwork(LeagueClient& _client, const std::string& network)
  {
    try {
      return Result<RecofrienderNetworkConfig> {
        _client.https.request("get", "/recofriender/v1/config/"+to_string(network)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderNetworkConfig> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV1ConfigByNetwork(LeagueClient& _client, const std::string& network, std::function<void(LeagueClient&,const Result<RecofrienderNetworkConfig>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/config/"+to_string(network)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderNetworkConfig> { response });
          else
            cb(_client,Result<RecofrienderNetworkConfig> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
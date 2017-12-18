#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderDebugConfig.hpp"
namespace lol {
  inline Result<RecofrienderDebugConfig> PutRecofrienderV1Debug(LeagueClient& _client, const RecofrienderDebugConfig& debugConfiguration)
  {
    try {
      return ToResult<RecofrienderDebugConfig>(_client.https.request("put", "/recofriender/v1/debug?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(debugConfiguration).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderDebugConfig>(e.code());
    }
  }
  inline void PutRecofrienderV1Debug(LeagueClient& _client, const RecofrienderDebugConfig& debugConfiguration, std::function<void(LeagueClient&, const Result<RecofrienderDebugConfig>&)> cb)
  {
    _client.httpsa.request("put", "/recofriender/v1/debug?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(debugConfiguration).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderDebugConfig>(e));
            else
              cb(_client, ToResult<RecofrienderDebugConfig>(response));
        });
  }
}
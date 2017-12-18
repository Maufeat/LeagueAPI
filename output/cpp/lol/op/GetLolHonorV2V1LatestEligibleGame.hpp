#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<uint64_t> GetLolHonorV2V1LatestEligibleGame(LeagueClient& _client)
  {
    try {
      return Result<uint64_t> {
        _client.https.request("get", "/lol-honor-v2/v1/latest-eligible-game?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint64_t> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolHonorV2V1LatestEligibleGame(LeagueClient& _client, std::function<void(LeagueClient&,const Result<uint64_t>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/latest-eligible-game?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<uint64_t> { response });
          else
            cb(_client,Result<uint64_t> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
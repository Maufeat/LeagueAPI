#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2ApiHonorPlayerServerRequest.hpp"
namespace lol {
  inline Result<std::string> PostLolHonorV2V1HonorPlayer(LeagueClient& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest)
  {
    try {
      return Result<std::string> {
        _client.https.request("post", "/lol-honor-v2/v1/honor-player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(honorPlayerRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolHonorV2V1HonorPlayer(LeagueClient& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-honor-v2/v1/honor-player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(honorPlayerRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
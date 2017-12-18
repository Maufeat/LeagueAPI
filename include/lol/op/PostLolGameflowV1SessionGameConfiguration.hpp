#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowQueue.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolGameflowV1SessionGameConfiguration(LeagueClient& _client, const LolGameflowQueue& queue)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-gameflow/v1/session/game-configuration?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queue).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolGameflowV1SessionGameConfiguration(LeagueClient& _client, const LolGameflowQueue& queue, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-gameflow/v1/session/game-configuration?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queue).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
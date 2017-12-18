#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowGameDodge.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolGameflowV1SessionDodge(LeagueClient& _client, const LolGameflowGameflowGameDodge& dodgeData)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-gameflow/v1/session/dodge?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(dodgeData).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolGameflowV1SessionDodge(LeagueClient& _client, const LolGameflowGameflowGameDodge& dodgeData, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-gameflow/v1/session/dodge?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(dodgeData).dump(),
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
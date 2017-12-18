#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolReplaysReplayContextData.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolReplaysV1RoflsByGameIdDownloadGraceful(LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayContextData& contextData)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-replays/v1/rofls/"+to_string(gameId)+"/download/graceful?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(contextData).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolReplaysV1RoflsByGameIdDownloadGraceful(LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayContextData& contextData, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-replays/v1/rofls/"+to_string(gameId)+"/download/graceful?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(contextData).dump(),
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
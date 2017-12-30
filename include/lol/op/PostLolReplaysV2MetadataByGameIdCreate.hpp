#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolReplaysReplayCreateMetadata.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolReplaysV2MetadataByGameIdCreate(T& _client, const uint64_t& gameId, const LolReplaysReplayCreateMetadata& request)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolReplaysV2MetadataByGameIdCreate(T& _client, const uint64_t& gameId, const LolReplaysReplayCreateMetadata& request, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
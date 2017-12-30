#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(T& _client, const uint64_t& gameId, const std::string& gameVersion, const std::string& gameType, const int32_t& queueId)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(T& _client, const uint64_t& gameId, const std::string& gameVersion, const std::string& gameType, const int32_t& queueId, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
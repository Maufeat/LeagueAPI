#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(LeagueClient& _client, const uint64_t& gameId, const std::string& gameVersion, const std::string& gameType, const int32_t& queueId)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(LeagueClient& _client, const uint64_t& gameId, const std::string& gameVersion, const std::string& gameType, const int32_t& queueId, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
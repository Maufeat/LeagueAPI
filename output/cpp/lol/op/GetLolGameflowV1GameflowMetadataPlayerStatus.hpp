#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowPlayerStatus.hpp"
namespace lol {
  inline Result<LolGameflowPlayerStatus> GetLolGameflowV1GameflowMetadataPlayerStatus(LeagueClient& _client)
  {
    try {
      return Result<LolGameflowPlayerStatus> {
        _client.https.request("get", "/lol-gameflow/v1/gameflow-metadata/player-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowPlayerStatus> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGameflowV1GameflowMetadataPlayerStatus(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolGameflowPlayerStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/gameflow-metadata/player-status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGameflowPlayerStatus> { response });
          else
            cb(_client,Result<LolGameflowPlayerStatus> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolReplaysReplaysConfiguration.hpp"
namespace lol {
  inline Result<LolReplaysReplaysConfiguration> GetLolReplaysV1Configuration(LeagueClient& _client)
  {
    try {
      return Result<LolReplaysReplaysConfiguration> {
        _client.https.request("get", "/lol-replays/v1/configuration?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolReplaysReplaysConfiguration> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolReplaysV1Configuration(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolReplaysReplaysConfiguration>&)> cb)
  {
    _client.httpsa.request("get", "/lol-replays/v1/configuration?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolReplaysReplaysConfiguration> { response });
          else
            cb(_client,Result<LolReplaysReplaysConfiguration> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
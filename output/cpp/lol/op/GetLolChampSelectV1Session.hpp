#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectSession.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectSession> GetLolChampSelectV1Session(LeagueClient& _client)
  {
    try {
      return Result<LolChampSelectChampSelectSession> {
        _client.https.request("get", "/lol-champ-select/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectV1Session(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolChampSelectChampSelectSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectChampSelectSession> { response });
          else
            cb(_client,Result<LolChampSelectChampSelectSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
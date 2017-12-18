#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectPickableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectPickableChampions> GetLolChampSelectV1PickableChampions(LeagueClient& _client)
  {
    try {
      return Result<LolChampSelectChampSelectPickableChampions> {
        _client.https.request("get", "/lol-champ-select/v1/pickable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectPickableChampions> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectV1PickableChampions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolChampSelectChampSelectPickableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/pickable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectChampSelectPickableChampions> { response });
          else
            cb(_client,Result<LolChampSelectChampSelectPickableChampions> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
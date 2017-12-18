#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectBannableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectBannableChampions> GetLolChampSelectV1BannableChampions(LeagueClient& _client)
  {
    try {
      return Result<LolChampSelectChampSelectBannableChampions> {
        _client.https.request("get", "/lol-champ-select/v1/bannable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectBannableChampions> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectV1BannableChampions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolChampSelectChampSelectBannableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/bannable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectChampSelectBannableChampions> { response });
          else
            cb(_client,Result<LolChampSelectChampSelectBannableChampions> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
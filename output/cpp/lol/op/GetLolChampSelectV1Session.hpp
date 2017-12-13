#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectSession.hpp>
namespace lol {
  Result<LolChampSelectChampSelectSession> GetLolChampSelectV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectChampSelectSession> {
        _client_.request("get", "/lol-champ-select/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
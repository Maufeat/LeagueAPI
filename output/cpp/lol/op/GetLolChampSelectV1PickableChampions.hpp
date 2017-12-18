#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectChampSelectPickableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectPickableChampions> GetLolChampSelectV1PickableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectChampSelectPickableChampions> {
        _client_.request("get", "/lol-champ-select/v1/pickable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectPickableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
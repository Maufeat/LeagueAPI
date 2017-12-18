#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectLegacyChampSelectPickableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectPickableChampions> GetLolChampSelectLegacyV1PickableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyChampSelectPickableChampions> {
        _client_.request("get", "/lol-champ-select-legacy/v1/pickable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyChampSelectPickableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
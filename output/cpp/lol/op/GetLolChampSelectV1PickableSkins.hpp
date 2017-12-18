#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectPickableSkins.hpp>
namespace lol {
  inline Result<LolChampSelectChampSelectPickableSkins> GetLolChampSelectV1PickableSkins(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectChampSelectPickableSkins> {
        _client_.request("get", "/lol-champ-select/v1/pickable-skins?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectPickableSkins> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
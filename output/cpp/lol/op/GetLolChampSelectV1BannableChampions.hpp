#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectBannableChampions.hpp>
namespace lol {
  Result<LolChampSelectChampSelectBannableChampions> GetLolChampSelectV1BannableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select/v1/bannable-champions?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
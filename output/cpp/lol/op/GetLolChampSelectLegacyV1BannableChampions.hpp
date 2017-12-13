#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectBannableChampions.hpp>
namespace lol {
  Result<LolChampSelectLegacyChampSelectBannableChampions> GetLolChampSelectLegacyV1BannableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyChampSelectBannableChampions> {
        _client_.request("get", "/lol-champ-select-legacy/v1/bannable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyChampSelectBannableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
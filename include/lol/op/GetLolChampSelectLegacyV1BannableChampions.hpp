#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectBannableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectBannableChampions> GetLolChampSelectLegacyV1BannableChampions(LeagueClient& _client)
  {
    try {
      return ToResult<LolChampSelectLegacyChampSelectBannableChampions>(_client.https.request("get", "/lol-champ-select-legacy/v1/bannable-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectLegacyChampSelectBannableChampions>(e.code());
    }
  }
  inline void GetLolChampSelectLegacyV1BannableChampions(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolChampSelectLegacyChampSelectBannableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/bannable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectLegacyChampSelectBannableChampions>(e));
            else
              cb(_client, ToResult<LolChampSelectLegacyChampSelectBannableChampions>(response));
        });
  }
}
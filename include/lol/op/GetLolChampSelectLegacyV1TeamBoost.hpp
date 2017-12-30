#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyTeamBoost.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectLegacyTeamBoost> GetLolChampSelectLegacyV1TeamBoost(T& _client)
  {
    try {
      return ToResult<LolChampSelectLegacyTeamBoost>(_client.https.request("get", "/lol-champ-select-legacy/v1/team-boost?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectLegacyTeamBoost>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectLegacyV1TeamBoost(T& _client, std::function<void(T&, const Result<LolChampSelectLegacyTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectLegacyTeamBoost>(e));
            else
              cb(_client, ToResult<LolChampSelectLegacyTeamBoost>(response));
        });
  }
}
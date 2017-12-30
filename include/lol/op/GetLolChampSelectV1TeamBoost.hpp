#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectTeamBoost.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectTeamBoost> GetLolChampSelectV1TeamBoost(T& _client)
  {
    try {
      return ToResult<LolChampSelectTeamBoost>(_client.https.request("get", "/lol-champ-select/v1/team-boost?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectTeamBoost>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1TeamBoost(T& _client, std::function<void(T&, const Result<LolChampSelectTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectTeamBoost>(e));
            else
              cb(_client, ToResult<LolChampSelectTeamBoost>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentStateInfo.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolClashTournamentStateInfo>> GetLolClashV1TournamentStateInfo(T& _client)
  {
    try {
      return ToResult<std::vector<LolClashTournamentStateInfo>>(_client.https.request("get", "/lol-clash/v1/tournament-state-info?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashTournamentStateInfo>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentStateInfo(T& _client, std::function<void(T&, const Result<std::vector<LolClashTournamentStateInfo>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament-state-info?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashTournamentStateInfo>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashTournamentStateInfo>>(response));
        });
  }
}
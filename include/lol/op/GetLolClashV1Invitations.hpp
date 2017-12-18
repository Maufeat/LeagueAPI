#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRoster.hpp"
namespace lol {
  inline Result<std::vector<LolClashRoster>> GetLolClashV1Invitations(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolClashRoster>>(_client.https.request("get", "/lol-clash/v1/invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashRoster>>(e.code());
    }
  }
  inline void GetLolClashV1Invitations(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolClashRoster>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashRoster>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashRoster>>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClubPreferences.hpp"
namespace lol {
  inline Result<ClubPreferences> GetLolClubsV1ClubsMembershipPreferences(LeagueClient& _client)
  {
    try {
      return ToResult<ClubPreferences>(_client.https.request("get", "/lol-clubs/v1/clubs/membership/preferences?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ClubPreferences>(e.code());
    }
  }
  inline void GetLolClubsV1ClubsMembershipPreferences(LeagueClient& _client, std::function<void(LeagueClient&, const Result<ClubPreferences>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/membership/preferences?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ClubPreferences>(e));
            else
              cb(_client, ToResult<ClubPreferences>(response));
        });
  }
}
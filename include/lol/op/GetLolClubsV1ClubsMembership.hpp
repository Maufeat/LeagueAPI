#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClubMembership.hpp"
namespace lol {
  inline Result<PlayerClubMembership> GetLolClubsV1ClubsMembership(LeagueClient& _client)
  {
    try {
      return ToResult<PlayerClubMembership>(_client.https.request("get", "/lol-clubs/v1/clubs/membership?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClubMembership>(e.code());
    }
  }
  inline void GetLolClubsV1ClubsMembership(LeagueClient& _client, std::function<void(LeagueClient&, const Result<PlayerClubMembership>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/membership?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerClubMembership>(e));
            else
              cb(_client, ToResult<PlayerClubMembership>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClubMembership.hpp"
namespace lol {
  inline Result<PlayerClubMembership> GetLolClubsV1ClubsMembership(LeagueClient& _client)
  {
    try {
      return Result<PlayerClubMembership> {
        _client.https.request("get", "/lol-clubs/v1/clubs/membership?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClubMembership> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClubsV1ClubsMembership(LeagueClient& _client, std::function<void(LeagueClient&,const Result<PlayerClubMembership>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/membership?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerClubMembership> { response });
          else
            cb(_client,Result<PlayerClubMembership> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
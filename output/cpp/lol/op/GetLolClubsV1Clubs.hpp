#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  inline Result<std::vector<PlayerClub>> GetLolClubsV1Clubs(LeagueClient& _client)
  {
    try {
      return Result<std::vector<PlayerClub>> {
        _client.https.request("get", "/lol-clubs/v1/clubs?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PlayerClub>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClubsV1Clubs(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<PlayerClub>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<PlayerClub>> { response });
          else
            cb(_client,Result<std::vector<PlayerClub>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
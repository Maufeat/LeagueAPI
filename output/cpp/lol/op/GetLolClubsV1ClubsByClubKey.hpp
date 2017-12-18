#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  inline Result<PlayerClub> GetLolClubsV1ClubsByClubKey(LeagueClient& _client, const std::string& clubKey)
  {
    try {
      return Result<PlayerClub> {
        _client.https.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClubsV1ClubsByClubKey(LeagueClient& _client, const std::string& clubKey, std::function<void(LeagueClient&,const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerClub> { response });
          else
            cb(_client,Result<PlayerClub> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
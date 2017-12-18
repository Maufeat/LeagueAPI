#pragma once
#include "../base_op.hpp" 
#include "../def/PlayerClub.hpp"
namespace lol {
  inline Result<PlayerClub> GetLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClub> {
        _client_.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
namespace lol {
  inline Result<std::vector<PlayerClub>> GetLolClubsV1Clubs(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PlayerClub>> {
        _client_.request("get", "/lol-clubs/v1/clubs?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PlayerClub>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
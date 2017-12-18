#pragma once
#include "../base_op.hpp" 
#include "../def/PlayerClubMembership.hpp"
namespace lol {
  inline Result<PlayerClubMembership> DeleteLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClubMembership> {
        _client_.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClubMembership> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
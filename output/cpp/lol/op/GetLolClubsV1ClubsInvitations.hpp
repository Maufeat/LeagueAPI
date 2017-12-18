#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubInvite.hpp>
namespace lol {
  inline Result<std::vector<ClubInvite>> GetLolClubsV1ClubsInvitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<ClubInvite>> {
        _client_.request("get", "/lol-clubs/v1/clubs/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<ClubInvite>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
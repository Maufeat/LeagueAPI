#pragma once
#include "../base_op.hpp" 
#include "../def/PlayerClubMembership.hpp"
#include "../def/ClubInvite.hpp"
namespace lol {
  inline Result<PlayerClubMembership> PatchLolClubsV1ClubsInvitations(const LeagueClient& _client, const ClubInvite& invitation)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClubMembership> {
        _client_.request("patch", "/lol-clubs/v1/clubs/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClubMembership> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
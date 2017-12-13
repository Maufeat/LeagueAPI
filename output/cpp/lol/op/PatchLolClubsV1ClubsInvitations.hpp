#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubInvite.hpp>
#include <lol/def/PlayerClubMembership.hpp>
namespace lol {
  Result<PlayerClubMembership> PatchLolClubsV1ClubsInvitations(const LeagueClient& _client, const ClubInvite& invitation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-clubs/v1/clubs/invitations?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(invitation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
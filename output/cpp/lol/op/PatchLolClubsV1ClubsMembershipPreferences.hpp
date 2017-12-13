#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubPreferences.hpp>
namespace lol {
  Result<ClubPreferences> PatchLolClubsV1ClubsMembershipPreferences(const LeagueClient& _client, const ClubPreferences& preferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-clubs/v1/clubs/membership/preferences?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(preferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
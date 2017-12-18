#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubPreferences.hpp>
namespace lol {
  inline Result<ClubPreferences> PatchLolClubsV1ClubsMembershipPreferences(const LeagueClient& _client, const ClubPreferences& preferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ClubPreferences> {
        _client_.request("patch", "/lol-clubs/v1/clubs/membership/preferences?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ClubPreferences> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
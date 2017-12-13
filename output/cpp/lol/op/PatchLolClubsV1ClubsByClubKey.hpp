#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
#include <lol/def/ClubTag.hpp>
namespace lol {
  Result<PlayerClub> PatchLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey, const ClubTag& tag)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(tag).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
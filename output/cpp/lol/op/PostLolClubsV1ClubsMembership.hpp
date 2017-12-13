#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubName.hpp>
#include <lol/def/PlayerClub.hpp>
namespace lol {
  Result<PlayerClub> PostLolClubsV1ClubsMembership(const LeagueClient& _client, const ClubName& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clubs/v1/clubs/membership?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(name).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
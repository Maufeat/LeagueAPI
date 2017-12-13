#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
#include <lol/def/ClubMOTD.hpp>
namespace lol {
  Result<PlayerClub> PatchLolClubsV1ClubsByClubKeyMotd(const LeagueClient& _client, const std::string& clubKey, const ClubMOTD& motd)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(motd).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
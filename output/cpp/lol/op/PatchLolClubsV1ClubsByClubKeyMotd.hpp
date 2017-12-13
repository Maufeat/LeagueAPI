#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
#include <lol/def/ClubMOTD.hpp>
namespace lol {
  Result<PlayerClub> PatchLolClubsV1ClubsByClubKeyMotd(const LeagueClient& _client, const std::string& clubKey, const ClubMOTD& motd)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClub> {
        _client_.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(motd).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
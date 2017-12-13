#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
#include <lol/def/ClubName.hpp>
namespace lol {
  Result<PlayerClub> PostLolClubsV1ClubsMembership(const LeagueClient& _client, const ClubName& name)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClub> {
        _client_.request("post", "/lol-clubs/v1/clubs/membership?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(name).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubTag.hpp>
#include <lol/def/PlayerClub.hpp>
namespace lol {
  inline Result<PlayerClub> PatchLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey, const ClubTag& tag)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClub> {
        _client_.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(tag).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
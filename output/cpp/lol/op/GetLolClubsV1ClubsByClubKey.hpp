#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
namespace lol {
  Result<PlayerClub> GetLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
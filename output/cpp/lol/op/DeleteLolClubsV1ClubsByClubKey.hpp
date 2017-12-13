#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClubMembership.hpp>
namespace lol {
  Result<PlayerClubMembership> DeleteLolClubsV1ClubsByClubKey(const LeagueClient& _client, const std::string& clubKey)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
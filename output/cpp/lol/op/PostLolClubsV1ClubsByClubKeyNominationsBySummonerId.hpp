#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubMemberLists.hpp>
namespace lol {
  Result<ClubMemberLists> PostLolClubsV1ClubsByClubKeyNominationsBySummonerId(const LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/nominations/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
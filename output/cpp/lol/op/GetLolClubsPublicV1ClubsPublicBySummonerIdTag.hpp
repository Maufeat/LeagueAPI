#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClubsPublicClubTag.hpp>
namespace lol {
  Result<LolClubsPublicClubTag> GetLolClubsPublicV1ClubsPublicBySummonerIdTag(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"/tag?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
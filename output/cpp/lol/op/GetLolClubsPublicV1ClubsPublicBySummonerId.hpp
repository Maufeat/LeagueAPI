#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClubsPublicClubsPublicData.hpp>
namespace lol {
  Result<LolClubsPublicClubsPublicData> GetLolClubsPublicV1ClubsPublicBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
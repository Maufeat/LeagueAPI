#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClubsPublicClubsPublicData.hpp>
namespace lol {
  Result<std::vector<LolClubsPublicClubsPublicData>> GetLolClubsPublicV1ClubsPublic(const LeagueClient& _client, const std::string& summonerNames)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs-public/v1/clubs/public?" + SimpleWeb::QueryString::create(Args2Headers({ { "summonerNames", to_string(summonerNames) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
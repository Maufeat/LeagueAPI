#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerIdAndIcon.hpp>
namespace lol {
  Result<std::vector<LolSummonerSummonerIdAndIcon>> GetLolSummonerV2SummonerIcons(const LeagueClient& _client, const std::vector<uint64_t>& ids)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v2/summoner-icons?" + SimpleWeb::QueryString::create(Args2Headers({ { "ids", to_string(ids) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
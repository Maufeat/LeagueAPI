#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerIdAndIcon.hpp>
namespace lol {
  inline Result<std::vector<LolSummonerSummonerIdAndIcon>> GetLolSummonerV2SummonerIcons(const LeagueClient& _client, const std::vector<uint64_t>& ids)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolSummonerSummonerIdAndIcon>> {
        _client_.request("get", "/lol-summoner/v2/summoner-icons?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSummonerSummonerIdAndIcon>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
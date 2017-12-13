#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummoner.hpp>
namespace lol {
  Result<std::vector<LolSummonerSummoner>> GetLolSummonerV2Summoners(const LeagueClient& _client, const std::optional<std::string>& name = std::nullopt, const std::optional<std::vector<uint64_t>>& ids = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolSummonerSummoner>> {
        _client_.request("get", "/lol-summoner/v2/summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) },
           { "ids", to_string(ids) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSummonerSummoner>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerInternalSummoner.hpp>
#include <lol/def/LolSummonerSummonerRequestedName.hpp>
namespace lol {
  inline Result<LolSummonerInternalSummoner> PostLolSummonerV1Summoners(const LeagueClient& _client, const LolSummonerSummonerRequestedName& name)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolSummonerInternalSummoner> {
        _client_.request("post", "/lol-summoner/v1/summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(name).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerInternalSummoner> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
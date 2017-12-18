#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRankedScoutingMember.hpp"
namespace lol {
  inline Result<std::vector<LolClashRankedScoutingMember>> GetLolClashV1ScoutingRanked(LeagueClient& _client, const std::vector<uint64_t>& summonerIds)
  {
    try {
      return Result<std::vector<LolClashRankedScoutingMember>> {
        _client.https.request("get", "/lol-clash/v1/scouting/ranked?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRankedScoutingMember>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1ScoutingRanked(LeagueClient& _client, const std::vector<uint64_t>& summonerIds, std::function<void(LeagueClient&,const Result<std::vector<LolClashRankedScoutingMember>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/scouting/ranked?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolClashRankedScoutingMember>> { response });
          else
            cb(_client,Result<std::vector<LolClashRankedScoutingMember>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
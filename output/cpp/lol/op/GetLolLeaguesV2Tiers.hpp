#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeagueQueueType.hpp"
#include "../def/LolLeaguesParticipantTiers.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesParticipantTiers>> GetLolLeaguesV2Tiers(LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<LolLeaguesLeagueQueueType>& queueTypes)
  {
    try {
      return Result<std::vector<LolLeaguesParticipantTiers>> {
        _client.https.request("get", "/lol-leagues/v2/tiers?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueTypes", to_string(queueTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesParticipantTiers>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV2Tiers(LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<LolLeaguesLeagueQueueType>& queueTypes, std::function<void(LeagueClient&,const Result<std::vector<LolLeaguesParticipantTiers>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v2/tiers?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueTypes", to_string(queueTypes) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLeaguesParticipantTiers>> { response });
          else
            cb(_client,Result<std::vector<LolLeaguesParticipantTiers>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
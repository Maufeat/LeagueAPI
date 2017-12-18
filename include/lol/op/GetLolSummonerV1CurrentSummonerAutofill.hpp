#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerAutoFillDto.hpp"
namespace lol {
  inline Result<LolSummonerAutoFillDto> GetLolSummonerV1CurrentSummonerAutofill(LeagueClient& _client)
  {
    try {
      return ToResult<LolSummonerAutoFillDto>(_client.https.request("get", "/lol-summoner/v1/current-summoner/autofill?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerAutoFillDto>(e.code());
    }
  }
  inline void GetLolSummonerV1CurrentSummonerAutofill(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolSummonerAutoFillDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v1/current-summoner/autofill?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerAutoFillDto>(e));
            else
              cb(_client, ToResult<LolSummonerAutoFillDto>(response));
        });
  }
}
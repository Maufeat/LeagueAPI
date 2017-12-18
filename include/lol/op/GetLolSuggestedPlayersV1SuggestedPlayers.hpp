#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSuggestedPlayersSuggestedPlayersSuggestedPlayer.hpp"
namespace lol {
  inline Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> GetLolSuggestedPlayersV1SuggestedPlayers(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>(_client.https.request("get", "/lol-suggested-players/v1/suggested-players?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>(e.code());
    }
  }
  inline void GetLolSuggestedPlayersV1SuggestedPlayers(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-suggested-players/v1/suggested-players?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>(e));
            else
              cb(_client, ToResult<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>(response));
        });
  }
}
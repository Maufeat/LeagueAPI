#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSuggestedPlayersSuggestedPlayersSuggestedPlayer.hpp"
namespace lol {
  inline Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> GetLolSuggestedPlayersV1SuggestedPlayers(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> {
        _client.https.request("get", "/lol-suggested-players/v1/suggested-players?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSuggestedPlayersV1SuggestedPlayers(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-suggested-players/v1/suggested-players?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> { response });
          else
            cb(_client,Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
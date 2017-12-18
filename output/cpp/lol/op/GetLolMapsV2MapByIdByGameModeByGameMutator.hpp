#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  inline Result<LolMapsMaps> GetLolMapsV2MapByIdByGameModeByGameMutator(LeagueClient& _client, const int64_t& id, const std::string& gameMode, const std::string& gameMutator)
  {
    try {
      return Result<LolMapsMaps> {
        _client.https.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"/"+to_string(gameMutator)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMapsMaps> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMapsV2MapByIdByGameModeByGameMutator(LeagueClient& _client, const int64_t& id, const std::string& gameMode, const std::string& gameMutator, std::function<void(LeagueClient&,const Result<LolMapsMaps>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"/"+to_string(gameMutator)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMapsMaps> { response });
          else
            cb(_client,Result<LolMapsMaps> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
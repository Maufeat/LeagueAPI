#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  inline Result<LolMapsMaps> GetLolMapsV2MapByIdByGameMode(LeagueClient& _client, const int64_t& id, const std::string& gameMode)
  {
    try {
      return ToResult<LolMapsMaps>(_client.https.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMapsMaps>(e.code());
    }
  }
  inline void GetLolMapsV2MapByIdByGameMode(LeagueClient& _client, const int64_t& id, const std::string& gameMode, std::function<void(LeagueClient&, const Result<LolMapsMaps>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMapsMaps>(e));
            else
              cb(_client, ToResult<LolMapsMaps>(response));
        });
  }
}
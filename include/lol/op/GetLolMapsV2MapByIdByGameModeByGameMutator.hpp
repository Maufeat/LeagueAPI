#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMapsMaps> GetLolMapsV2MapByIdByGameModeByGameMutator(T& _client, const int64_t& id, const std::string& gameMode, const std::string& gameMutator)
  {
    try {
      return ToResult<LolMapsMaps>(_client.https.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"/"+to_string(gameMutator)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMapsMaps>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMapsV2MapByIdByGameModeByGameMutator(T& _client, const int64_t& id, const std::string& gameMode, const std::string& gameMutator, std::function<void(T&, const Result<LolMapsMaps>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"/"+to_string(gameMutator)+"?" +
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
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  inline Result<std::vector<LolMapsMaps>> GetLolMapsV1Maps(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolMapsMaps>> {
        _client.https.request("get", "/lol-maps/v1/maps?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolMapsMaps>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMapsV1Maps(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolMapsMaps>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-maps/v1/maps?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolMapsMaps>> { response });
          else
            cb(_client,Result<std::vector<LolMapsMaps>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
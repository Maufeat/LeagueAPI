#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowAvailability.hpp"
namespace lol {
  inline Result<LolGameflowGameflowAvailability> GetLolGameflowV1Availability(LeagueClient& _client)
  {
    try {
      return ToResult<LolGameflowGameflowAvailability>(_client.https.request("get", "/lol-gameflow/v1/availability?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameflowGameflowAvailability>(e.code());
    }
  }
  inline void GetLolGameflowV1Availability(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolGameflowGameflowAvailability>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/availability?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameflowGameflowAvailability>(e));
            else
              cb(_client, ToResult<LolGameflowGameflowAvailability>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClashEventData.hpp"
namespace lol {
  inline Result<ClashEventData> GetLolClashV1EventByUuid(LeagueClient& _client, const std::string& uuid)
  {
    try {
      return ToResult<ClashEventData>(_client.https.request("get", "/lol-clash/v1/event/"+to_string(uuid)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ClashEventData>(e.code());
    }
  }
  inline void GetLolClashV1EventByUuid(LeagueClient& _client, const std::string& uuid, std::function<void(LeagueClient&, const Result<ClashEventData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/event/"+to_string(uuid)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ClashEventData>(e));
            else
              cb(_client, ToResult<ClashEventData>(response));
        });
  }
}
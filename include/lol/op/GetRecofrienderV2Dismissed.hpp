#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactResource.hpp"
namespace lol {
  inline Result<std::vector<RecofrienderContactResource>> GetRecofrienderV2Dismissed(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<RecofrienderContactResource>>(_client.https.request("get", "/recofriender/v2/dismissed?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<RecofrienderContactResource>>(e.code());
    }
  }
  inline void GetRecofrienderV2Dismissed(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<RecofrienderContactResource>>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/dismissed?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<RecofrienderContactResource>>(e));
            else
              cb(_client, ToResult<std::vector<RecofrienderContactResource>>(response));
        });
  }
}
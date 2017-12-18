#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::map<std::string, std::string>> GetPatcherV1ProductsByProductIdTags(LeagueClient& _client, const std::string& product_id)
  {
    try {
      return ToResult<std::map<std::string, std::string>>(_client.https.request("get", "/patcher/v1/products/"+to_string(product_id)+"/tags?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::map<std::string, std::string>>(e.code());
    }
  }
  inline void GetPatcherV1ProductsByProductIdTags(LeagueClient& _client, const std::string& product_id, std::function<void(LeagueClient&, const Result<std::map<std::string, std::string>>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/products/"+to_string(product_id)+"/tags?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::map<std::string, std::string>>(e));
            else
              cb(_client, ToResult<std::map<std::string, std::string>>(response));
        });
  }
}
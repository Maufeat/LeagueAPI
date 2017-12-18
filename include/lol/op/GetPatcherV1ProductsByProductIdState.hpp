#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherProductState.hpp"
namespace lol {
  inline Result<PatcherProductState> GetPatcherV1ProductsByProductIdState(LeagueClient& _client, const std::string& product_id)
  {
    try {
      return ToResult<PatcherProductState>(_client.https.request("get", "/patcher/v1/products/"+to_string(product_id)+"/state?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PatcherProductState>(e.code());
    }
  }
  inline void GetPatcherV1ProductsByProductIdState(LeagueClient& _client, const std::string& product_id, std::function<void(LeagueClient&, const Result<PatcherProductState>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/products/"+to_string(product_id)+"/state?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PatcherProductState>(e));
            else
              cb(_client, ToResult<PatcherProductState>(response));
        });
  }
}
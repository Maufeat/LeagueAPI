#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherProductState.hpp"
namespace lol {
  inline Result<PatcherProductState> PostPatcherV1ProductsByProductIdDetectCorruptionRequest(LeagueClient& _client, const std::string& product_id)
  {
    try {
      return Result<PatcherProductState> {
        _client.https.request("post", "/patcher/v1/products/"+to_string(product_id)+"/detect-corruption-request?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PatcherProductState> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostPatcherV1ProductsByProductIdDetectCorruptionRequest(LeagueClient& _client, const std::string& product_id, std::function<void(LeagueClient&,const Result<PatcherProductState>&)> cb)
  {
    _client.httpsa.request("post", "/patcher/v1/products/"+to_string(product_id)+"/detect-corruption-request?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PatcherProductState> { response });
          else
            cb(_client,Result<PatcherProductState> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
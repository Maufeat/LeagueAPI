#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeletePatcherV1ProductsByProductIdByComponentIdHttpHeaders(const LeagueClient& _client, const std::string& product_id, const std::string& component_id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/patcher/v1/products/"+to_string(product_id)+"/"+to_string(component_id)+"/http-headers?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
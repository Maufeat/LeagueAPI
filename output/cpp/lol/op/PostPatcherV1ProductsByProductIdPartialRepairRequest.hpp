#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> PostPatcherV1ProductsByProductIdPartialRepairRequest(const LeagueClient& _client, const std::string& product_id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/patcher/v1/products/"+to_string(product_id)+"/partial-repair-request?" +
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
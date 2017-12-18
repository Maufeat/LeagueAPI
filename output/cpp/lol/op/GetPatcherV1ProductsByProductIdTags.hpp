#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<std::map<std::string, std::string>> GetPatcherV1ProductsByProductIdTags(const LeagueClient& _client, const std::string& product_id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::map<std::string, std::string>> {
        _client_.request("get", "/patcher/v1/products/"+to_string(product_id)+"/tags?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, std::string>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::map<std::string, std::string>> GetPatcherV1ProductsByProductIdPaths(const LeagueClient& _client, const std::string& product_id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/patcher/v1/products/"+to_string(product_id)+"/paths?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
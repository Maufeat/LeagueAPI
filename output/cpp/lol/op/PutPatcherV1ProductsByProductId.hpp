#pragma once
#include "../base_op.hpp" 
#include "../def/PatcherProductResource.hpp"
namespace lol {
  inline Result<json> PutPatcherV1ProductsByProductId(const LeagueClient& _client, const std::string& product_id, const PatcherProductResource& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/patcher/v1/products/"+to_string(product_id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/PatcherHeaderEntry.hpp"
namespace lol {
  inline Result<json> PutPatcherV1ProductsByProductIdByComponentIdHttpHeaders(const LeagueClient& _client, const std::string& product_id, const std::string& component_id, const std::vector<PatcherHeaderEntry>& headers)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/patcher/v1/products/"+to_string(product_id)+"/"+to_string(component_id)+"/http-headers?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(headers).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherHeaderEntry.hpp>
namespace lol {
  Result<json> PutPatcherV1ProductsByProductIdByComponentIdHttpHeaders(const LeagueClient& _client, const std::string& product_id, const std::string& component_id, const std::vector<PatcherHeaderEntry>& headers)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/patcher/v1/products/"+to_string(product_id)+"/"+to_string(component_id)+"/http-headers?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(headers).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
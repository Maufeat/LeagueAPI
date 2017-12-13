#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherProductResource.hpp>
namespace lol {
  Result<json> PutPatcherV1ProductsByProductId(const LeagueClient& _client, const std::string& product_id, const PatcherProductResource& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/patcher/v1/products/"+to_string(product_id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
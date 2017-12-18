#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PutLolPerksV1Currentpage(LeagueClient& _client, const int32_t& id)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/lol-perks/v1/currentpage?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(id).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PutLolPerksV1Currentpage(LeagueClient& _client, const int32_t& id, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-perks/v1/currentpage?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(id).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
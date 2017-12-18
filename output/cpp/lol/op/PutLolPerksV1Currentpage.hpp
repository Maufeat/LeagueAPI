#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PutLolPerksV1Currentpage(LeagueClient& _client, const int32_t& id)
  {
    try {
      return Result<json> {
        _client.https.request("put", "/lol-perks/v1/currentpage?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolPerksV1Currentpage(LeagueClient& _client, const int32_t& id, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-perks/v1/currentpage?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> PutLolPerksV1Currentpage(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-perks/v1/currentpage?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
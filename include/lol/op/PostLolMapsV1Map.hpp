#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolMapsV1Map(LeagueClient& _client, const LolMapsMaps& map)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-maps/v1/map?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(map).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolMapsV1Map(LeagueClient& _client, const LolMapsMaps& map, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-maps/v1/map?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(map).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
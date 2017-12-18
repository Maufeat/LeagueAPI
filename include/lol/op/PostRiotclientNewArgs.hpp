#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostRiotclientNewArgs(LeagueClient& _client, const std::vector<std::string>& args)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/riotclient/new-args?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        Args2String({ 
          { "args", to_string(args) }, }),
        Args2Headers({
          {"content-type", "application/x-www-form-urlencoded"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostRiotclientNewArgs(LeagueClient& _client, const std::vector<std::string>& args, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/new-args?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        Args2String({ 
          { "args", to_string(args) }, }),
        Args2Headers({
          {"content-type", "application/x-www-form-urlencoded"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
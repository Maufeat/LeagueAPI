#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostRiotclientAddorupdatemetric(LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/riotclient/addorupdatemetric?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "group", to_string(group) },
          { "object", to_string(object) },
          { "name", to_string(name) },
          { "value", to_string(value) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostRiotclientAddorupdatemetric(LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/addorupdatemetric?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "group", to_string(group) },
          { "object", to_string(object) },
          { "name", to_string(name) },
          { "value", to_string(value) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
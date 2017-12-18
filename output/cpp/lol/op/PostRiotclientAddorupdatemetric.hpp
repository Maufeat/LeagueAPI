#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostRiotclientAddorupdatemetric(LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/riotclient/addorupdatemetric?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "group", to_string(group) },
           { "object", to_string(object) },
           { "name", to_string(name) },
           { "value", to_string(value) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRiotclientAddorupdatemetric(LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value, std::function<void(LeagueClient&,const Result<void>&)> cb)
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
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
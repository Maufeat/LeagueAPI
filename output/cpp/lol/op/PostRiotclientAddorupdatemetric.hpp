#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostRiotclientAddorupdatemetric(const LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/addorupdatemetric?" +
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
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
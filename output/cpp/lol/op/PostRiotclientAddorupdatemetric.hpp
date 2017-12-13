#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientAddorupdatemetric(const LeagueClient& _client, const std::string& group, const std::string& object, const std::string& name, const uint64_t& value)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/addorupdatemetric?" + SimpleWeb::QueryString::create(Args2Headers({ { "group", to_string(group) },
    { "object", to_string(object) },
    { "name", to_string(name) },
    { "value", to_string(value) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
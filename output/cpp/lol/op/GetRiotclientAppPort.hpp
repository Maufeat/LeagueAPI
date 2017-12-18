#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<uint16_t> GetRiotclientAppPort(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<uint16_t> {
        _client_.request("get", "/riotclient/app-port?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint16_t> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
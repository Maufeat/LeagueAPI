#pragma once
#include "../base_op.hpp" 
#include "../def/RecofrienderConfig.hpp"
namespace lol {
  inline Result<RecofrienderConfig> GetRecofrienderV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderConfig> {
        _client_.request("get", "/recofriender/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
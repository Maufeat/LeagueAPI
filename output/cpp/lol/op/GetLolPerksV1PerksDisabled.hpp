#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<std::vector<int32_t>> GetLolPerksV1PerksDisabled(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<int32_t>> {
        _client_.request("get", "/lol-perks/v1/perks/disabled?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<int32_t>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
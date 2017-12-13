#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<uint64_t>> GetLolEndOfGameV1ReportedPlayers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<uint64_t>> {
        _client_.request("get", "/lol-end-of-game/v1/reported-players?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<uint64_t>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
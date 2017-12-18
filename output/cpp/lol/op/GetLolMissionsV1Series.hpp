#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SeriesDTO.hpp>
namespace lol {
  inline Result<std::vector<SeriesDTO>> GetLolMissionsV1Series(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<SeriesDTO>> {
        _client_.request("get", "/lol-missions/v1/series?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<SeriesDTO>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
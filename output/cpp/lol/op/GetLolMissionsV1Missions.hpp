#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerMissionDTO.hpp>
namespace lol {
  Result<std::vector<PlayerMissionDTO>> GetLolMissionsV1Missions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PlayerMissionDTO>> {
        _client_.request("get", "/lol-missions/v1/missions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PlayerMissionDTO>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
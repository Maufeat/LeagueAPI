#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerMissionDTO.hpp>
namespace lol {
  inline Result<PlayerMissionDTO> GetLolMissionsV1MissionsByMissionId(const LeagueClient& _client, const std::string& missionId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerMissionDTO> {
        _client_.request("get", "/lol-missions/v1/missions/"+to_string(missionId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerMissionDTO> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
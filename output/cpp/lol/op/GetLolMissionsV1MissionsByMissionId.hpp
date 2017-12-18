#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerMissionDTO.hpp"
namespace lol {
  inline Result<PlayerMissionDTO> GetLolMissionsV1MissionsByMissionId(LeagueClient& _client, const std::string& missionId)
  {
    try {
      return Result<PlayerMissionDTO> {
        _client.https.request("get", "/lol-missions/v1/missions/"+to_string(missionId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerMissionDTO> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMissionsV1MissionsByMissionId(LeagueClient& _client, const std::string& missionId, std::function<void(LeagueClient&,const Result<PlayerMissionDTO>&)> cb)
  {
    _client.httpsa.request("get", "/lol-missions/v1/missions/"+to_string(missionId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerMissionDTO> { response });
          else
            cb(_client,Result<PlayerMissionDTO> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
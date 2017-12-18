#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerMissionDTO.hpp"
namespace lol {
  inline Result<std::vector<PlayerMissionDTO>> GetLolMissionsV1Missions(LeagueClient& _client)
  {
    try {
      return Result<std::vector<PlayerMissionDTO>> {
        _client.https.request("get", "/lol-missions/v1/missions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PlayerMissionDTO>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMissionsV1Missions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<PlayerMissionDTO>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-missions/v1/missions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<PlayerMissionDTO>> { response });
          else
            cb(_client,Result<std::vector<PlayerMissionDTO>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
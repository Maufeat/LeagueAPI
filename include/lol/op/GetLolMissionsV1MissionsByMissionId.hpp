#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerMissionDTO.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerMissionDTO> GetLolMissionsV1MissionsByMissionId(T& _client, const std::string& missionId)
  {
    try {
      return ToResult<PlayerMissionDTO>(_client.https.request("get", "/lol-missions/v1/missions/"+to_string(missionId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerMissionDTO>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMissionsV1MissionsByMissionId(T& _client, const std::string& missionId, std::function<void(T&, const Result<PlayerMissionDTO>&)> cb)
  {
    _client.httpsa.request("get", "/lol-missions/v1/missions/"+to_string(missionId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerMissionDTO>(e));
            else
              cb(_client, ToResult<PlayerMissionDTO>(response));
        });
  }
}
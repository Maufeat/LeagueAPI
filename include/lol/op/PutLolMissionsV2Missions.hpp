#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/MissionIdsDTO.hpp"
namespace lol {
  inline Result<std::nullptr_t> PutLolMissionsV2Missions(LeagueClient& _client, const MissionIdsDTO& missionIds)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("put", "/lol-missions/v2/missions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(missionIds).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PutLolMissionsV2Missions(LeagueClient& _client, const MissionIdsDTO& missionIds, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("put", "/lol-missions/v2/missions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(missionIds).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
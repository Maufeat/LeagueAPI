#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/MissionIdsDTO.hpp>
namespace lol {
  Result<void> PutLolMissionsV2Missions(const LeagueClient& _client, const MissionIdsDTO& missionIds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/lol-missions/v2/missions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(missionIds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
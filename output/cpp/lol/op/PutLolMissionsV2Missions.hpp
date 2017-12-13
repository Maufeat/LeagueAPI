#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/MissionIdsDTO.hpp>
namespace lol {
  Result<void> PutLolMissionsV2Missions(const LeagueClient& _client, const MissionIdsDTO& missionIds)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-missions/v2/missions?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(missionIds).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
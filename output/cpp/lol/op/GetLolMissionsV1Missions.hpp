#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerMissionDTO.hpp>
namespace lol {
  Result<std::vector<PlayerMissionDTO>> GetLolMissionsV1Missions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-missions/v1/missions?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
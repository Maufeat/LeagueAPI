#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMapsMaps.hpp>
namespace lol {
  Result<LolMapsMaps> GetLolMapsV2MapByIdByGameMode(const LeagueClient& _client, const int64_t& id, const std::string& gameMode)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
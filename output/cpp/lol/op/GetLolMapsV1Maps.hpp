#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMapsMaps.hpp>
namespace lol {
  Result<std::vector<LolMapsMaps>> GetLolMapsV1Maps(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-maps/v1/maps?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
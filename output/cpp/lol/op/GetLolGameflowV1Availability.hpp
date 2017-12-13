#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowAvailability.hpp>
namespace lol {
  Result<LolGameflowGameflowAvailability> GetLolGameflowV1Availability(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-gameflow/v1/availability?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowAvailability.hpp>
namespace lol {
  Result<LolGameflowGameflowAvailability> GetLolGameflowV1Availability(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameflowGameflowAvailability> {
        _client_.request("get", "/lol-gameflow/v1/availability?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowGameflowAvailability> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
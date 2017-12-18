#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<bool> GetLolSummonerV1CheckNameAvailabilityByName(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<bool> {
        _client_.request("get", "/lol-summoner/v1/check-name-availability/"+to_string(name)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
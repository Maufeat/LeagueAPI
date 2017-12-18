#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMapsMaps.hpp>
namespace lol {
  inline Result<LolMapsMaps> GetLolMapsV1MapById(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMapsMaps> {
        _client_.request("get", "/lol-maps/v1/map/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMapsMaps> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
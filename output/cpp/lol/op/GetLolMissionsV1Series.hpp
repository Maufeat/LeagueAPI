#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SeriesDTO.hpp"
namespace lol {
  inline Result<std::vector<SeriesDTO>> GetLolMissionsV1Series(LeagueClient& _client)
  {
    try {
      return Result<std::vector<SeriesDTO>> {
        _client.https.request("get", "/lol-missions/v1/series?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<SeriesDTO>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMissionsV1Series(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<SeriesDTO>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-missions/v1/series?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<SeriesDTO>> { response });
          else
            cb(_client,Result<std::vector<SeriesDTO>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
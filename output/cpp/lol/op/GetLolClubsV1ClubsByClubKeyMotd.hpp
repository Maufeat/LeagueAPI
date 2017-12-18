#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> GetLolClubsV1ClubsByClubKeyMotd(LeagueClient& _client, const std::string& clubKey)
  {
    try {
      return Result<std::string> {
        _client.https.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClubsV1ClubsByClubKeyMotd(LeagueClient& _client, const std::string& clubKey, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
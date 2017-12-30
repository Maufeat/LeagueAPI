#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerClub> GetLolClubsV1ClubsByClubKey(T& _client, const std::string& clubKey)
  {
    try {
      return ToResult<PlayerClub>(_client.https.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClub>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClubsV1ClubsByClubKey(T& _client, const std::string& clubKey, std::function<void(T&, const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerClub>(e));
            else
              cb(_client, ToResult<PlayerClub>(response));
        });
  }
}
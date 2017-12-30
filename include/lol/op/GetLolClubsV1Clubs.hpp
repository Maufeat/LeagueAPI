#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<PlayerClub>> GetLolClubsV1Clubs(T& _client)
  {
    try {
      return ToResult<std::vector<PlayerClub>>(_client.https.request("get", "/lol-clubs/v1/clubs?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PlayerClub>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClubsV1Clubs(T& _client, std::function<void(T&, const Result<std::vector<PlayerClub>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PlayerClub>>(e));
            else
              cb(_client, ToResult<std::vector<PlayerClub>>(response));
        });
  }
}
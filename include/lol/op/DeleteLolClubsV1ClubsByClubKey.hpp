#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClubMembership.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerClubMembership> DeleteLolClubsV1ClubsByClubKey(T& _client, const std::string& clubKey)
  {
    try {
      return ToResult<PlayerClubMembership>(_client.https.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClubMembership>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolClubsV1ClubsByClubKey(T& _client, const std::string& clubKey, std::function<void(T&, const Result<PlayerClubMembership>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerClubMembership>(e));
            else
              cb(_client, ToResult<PlayerClubMembership>(response));
        });
  }
}
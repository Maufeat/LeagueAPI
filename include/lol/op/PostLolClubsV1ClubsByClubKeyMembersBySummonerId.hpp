#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerClub> PostLolClubsV1ClubsByClubKeyMembersBySummonerId(T& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    try {
      return ToResult<PlayerClub>(_client.https.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClub>(e.code());
    }
  }
  template<typename T>
  inline void PostLolClubsV1ClubsByClubKeyMembersBySummonerId(T& _client, const std::string& clubKey, const uint64_t& summonerId, std::function<void(T&, const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?" +
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
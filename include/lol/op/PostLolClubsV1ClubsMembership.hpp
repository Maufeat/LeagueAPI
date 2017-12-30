#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClubName.hpp"
#include "../def/PlayerClub.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerClub> PostLolClubsV1ClubsMembership(T& _client, const ClubName& name)
  {
    try {
      return ToResult<PlayerClub>(_client.https.request("post", "/lol-clubs/v1/clubs/membership?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClub>(e.code());
    }
  }
  template<typename T>
  inline void PostLolClubsV1ClubsMembership(T& _client, const ClubName& name, std::function<void(T&, const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clubs/v1/clubs/membership?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerClub>(e));
            else
              cb(_client, ToResult<PlayerClub>(response));
        });
  }
}
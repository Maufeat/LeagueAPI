#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClubMOTD.hpp"
#include "../def/PlayerClub.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerClub> PatchLolClubsV1ClubsByClubKeyMotd(T& _client, const std::string& clubKey, const ClubMOTD& motd)
  {
    try {
      return ToResult<PlayerClub>(_client.https.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(motd).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerClub>(e.code());
    }
  }
  template<typename T>
  inline void PatchLolClubsV1ClubsByClubKeyMotd(T& _client, const std::string& clubKey, const ClubMOTD& motd, std::function<void(T&, const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(motd).dump(),
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
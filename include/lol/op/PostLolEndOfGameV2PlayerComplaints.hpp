#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEndOfGameEndOfGamePlayerComplaintV2.hpp"
namespace lol {
  template<typename T>
  inline Result<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints(T& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint)
  {
    try {
      return ToResult<LolEndOfGameEndOfGamePlayerComplaintV2>(_client.https.request("post", "/lol-end-of-game/v2/player-complaints?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(complaint).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolEndOfGameEndOfGamePlayerComplaintV2>(e.code());
    }
  }
  template<typename T>
  inline void PostLolEndOfGameV2PlayerComplaints(T& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint, std::function<void(T&, const Result<LolEndOfGameEndOfGamePlayerComplaintV2>&)> cb)
  {
    _client.httpsa.request("post", "/lol-end-of-game/v2/player-complaints?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(complaint).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolEndOfGameEndOfGamePlayerComplaintV2>(e));
            else
              cb(_client, ToResult<LolEndOfGameEndOfGamePlayerComplaintV2>(response));
        });
  }
}
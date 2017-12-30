#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<std::vector<int64_t>> GetLolClashV1TournamentIds(T& _client)
  {
    try {
      return ToResult<std::vector<int64_t>>(_client.https.request("get", "/lol-clash/v1/tournamentIds?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<int64_t>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentIds(T& _client, std::function<void(T&, const Result<std::vector<int64_t>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournamentIds?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<int64_t>>(e));
            else
              cb(_client, ToResult<std::vector<int64_t>>(response));
        });
  }
}
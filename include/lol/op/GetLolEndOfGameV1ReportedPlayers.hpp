#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<std::vector<uint64_t>> GetLolEndOfGameV1ReportedPlayers(T& _client)
  {
    try {
      return ToResult<std::vector<uint64_t>>(_client.https.request("get", "/lol-end-of-game/v1/reported-players?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<uint64_t>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolEndOfGameV1ReportedPlayers(T& _client, std::function<void(T&, const Result<std::vector<uint64_t>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-end-of-game/v1/reported-players?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<uint64_t>>(e));
            else
              cb(_client, ToResult<std::vector<uint64_t>>(response));
        });
  }
}
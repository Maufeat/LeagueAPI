#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatErrorResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChatErrorResource>> GetLolChatV1Errors(T& _client)
  {
    try {
      return ToResult<std::vector<LolChatErrorResource>>(_client.https.request("get", "/lol-chat/v1/errors?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatErrorResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1Errors(T& _client, std::function<void(T&, const Result<std::vector<LolChatErrorResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/errors?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatErrorResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatErrorResource>>(response));
        });
  }
}
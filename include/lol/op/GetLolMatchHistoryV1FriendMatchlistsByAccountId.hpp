#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryList.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1FriendMatchlistsByAccountId(T& _client, const uint64_t& accountId)
  {
    try {
      return ToResult<LolMatchHistoryMatchHistoryList>(_client.https.request("get", "/lol-match-history/v1/friend-matchlists/"+to_string(accountId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchHistoryMatchHistoryList>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchHistoryV1FriendMatchlistsByAccountId(T& _client, const uint64_t& accountId, std::function<void(T&, const Result<LolMatchHistoryMatchHistoryList>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/friend-matchlists/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchHistoryMatchHistoryList>(e));
            else
              cb(_client, ToResult<LolMatchHistoryMatchHistoryList>(response));
        });
  }
}
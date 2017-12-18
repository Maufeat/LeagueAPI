#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryList.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1FriendMatchlistsByAccountId(LeagueClient& _client, const uint64_t& accountId)
  {
    try {
      return Result<LolMatchHistoryMatchHistoryList> {
        _client.https.request("get", "/lol-match-history/v1/friend-matchlists/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryList> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchHistoryV1FriendMatchlistsByAccountId(LeagueClient& _client, const uint64_t& accountId, std::function<void(LeagueClient&,const Result<LolMatchHistoryMatchHistoryList>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/friend-matchlists/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMatchHistoryMatchHistoryList> { response });
          else
            cb(_client,Result<LolMatchHistoryMatchHistoryList> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
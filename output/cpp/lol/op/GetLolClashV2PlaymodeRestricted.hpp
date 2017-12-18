#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlaymodeRestrictedInfo.hpp"
namespace lol {
  inline Result<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted(LeagueClient& _client)
  {
    try {
      return Result<LolClashPlaymodeRestrictedInfo> {
        _client.https.request("get", "/lol-clash/v2/playmode-restricted?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlaymodeRestrictedInfo> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV2PlaymodeRestricted(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashPlaymodeRestrictedInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v2/playmode-restricted?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashPlaymodeRestrictedInfo> { response });
          else
            cb(_client,Result<LolClashPlaymodeRestrictedInfo> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
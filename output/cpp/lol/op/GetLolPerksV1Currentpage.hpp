#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  inline Result<LolPerksPerkPageResource> GetLolPerksV1Currentpage(LeagueClient& _client)
  {
    try {
      return Result<LolPerksPerkPageResource> {
        _client.https.request("get", "/lol-perks/v1/currentpage?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksPerkPageResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPerksV1Currentpage(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolPerksPerkPageResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/currentpage?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPerksPerkPageResource> { response });
          else
            cb(_client,Result<LolPerksPerkPageResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
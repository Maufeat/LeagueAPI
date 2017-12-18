#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkUIPerk.hpp"
namespace lol {
  inline Result<std::vector<LolPerksPerkUIPerk>> GetLolPerksV1Perks(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolPerksPerkUIPerk>> {
        _client.https.request("get", "/lol-perks/v1/perks?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPerksPerkUIPerk>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPerksV1Perks(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolPerksPerkUIPerk>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/perks?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolPerksPerkUIPerk>> { response });
          else
            cb(_client,Result<std::vector<LolPerksPerkUIPerk>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
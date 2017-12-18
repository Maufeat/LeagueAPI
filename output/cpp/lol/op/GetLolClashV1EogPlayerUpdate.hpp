#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashEogPlayerUpdateDTO.hpp"
namespace lol {
  inline Result<LolClashEogPlayerUpdateDTO> GetLolClashV1EogPlayerUpdate(LeagueClient& _client)
  {
    try {
      return Result<LolClashEogPlayerUpdateDTO> {
        _client.https.request("get", "/lol-clash/v1/eogPlayerUpdate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashEogPlayerUpdateDTO> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1EogPlayerUpdate(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashEogPlayerUpdateDTO>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/eogPlayerUpdate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashEogPlayerUpdateDTO> { response });
          else
            cb(_client,Result<LolClashEogPlayerUpdateDTO> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashEogPlayerUpdateDTO.hpp>
namespace lol {
  Result<LolClashEogPlayerUpdateDTO> GetLolClashV1EogPlayerUpdate(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashEogPlayerUpdateDTO> {
        _client_.request("get", "/lol-clash/v1/eogPlayerUpdate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashEogPlayerUpdateDTO> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
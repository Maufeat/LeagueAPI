#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashRoster.hpp"
namespace lol {
  inline Result<std::vector<LolClashRoster>> GetLolClashV1Invitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashRoster>> {
        _client_.request("get", "/lol-clash/v1/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRoster>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
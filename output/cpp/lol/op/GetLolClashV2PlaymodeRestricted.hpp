#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashPlaymodeRestrictedInfo.hpp"
namespace lol {
  inline Result<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashPlaymodeRestrictedInfo> {
        _client_.request("get", "/lol-clash/v2/playmode-restricted?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlaymodeRestrictedInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
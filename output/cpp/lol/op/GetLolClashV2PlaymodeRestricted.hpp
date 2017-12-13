#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlaymodeRestrictedInfo.hpp>
namespace lol {
  Result<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v2/playmode-restricted?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
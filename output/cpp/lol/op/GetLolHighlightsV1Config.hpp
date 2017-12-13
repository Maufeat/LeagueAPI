#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/HighlightsConfig.hpp>
namespace lol {
  Result<HighlightsConfig> GetLolHighlightsV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-highlights/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
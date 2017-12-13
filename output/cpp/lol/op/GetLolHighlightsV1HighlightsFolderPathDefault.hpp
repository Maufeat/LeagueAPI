#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolHighlightsV1HighlightsFolderPathDefault(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-highlights/v1/highlights-folder-path/default?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolStoreV1LastPage(const LeagueClient& _client, const std::string& pageType)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-store/v1/lastPage?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(pageType).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
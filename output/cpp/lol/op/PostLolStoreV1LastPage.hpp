#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolStoreV1LastPage(const LeagueClient& _client, const std::string& pageType)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-store/v1/lastPage?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(pageType).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
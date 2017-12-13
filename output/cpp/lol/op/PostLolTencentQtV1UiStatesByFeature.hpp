#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/TencentQTNotification.hpp>
namespace lol {
  Result<json> PostLolTencentQtV1UiStatesByFeature(const LeagueClient& _client, const std::string& feature, const TencentQTNotification& state)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(state).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
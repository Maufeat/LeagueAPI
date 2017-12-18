#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/TencentQTNotification.hpp"
namespace lol {
  inline Result<json> PostLolTencentQtV1UiStatesByFeature(LeagueClient& _client, const std::string& feature, const TencentQTNotification& state)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(state).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolTencentQtV1UiStatesByFeature(LeagueClient& _client, const std::string& feature, const TencentQTNotification& state, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(state).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
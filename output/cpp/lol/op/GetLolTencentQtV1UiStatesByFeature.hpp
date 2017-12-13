#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/TencentQTNotification.hpp>
namespace lol {
  Result<TencentQTNotification> GetLolTencentQtV1UiStatesByFeature(const LeagueClient& _client, const std::string& feature)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
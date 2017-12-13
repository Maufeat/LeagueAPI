#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/TencentQTNotification.hpp>
namespace lol {
  Result<std::map<std::string, TencentQTNotification>> GetLolTencentQtV1UiStates(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-tencent-qt/v1/ui-states?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
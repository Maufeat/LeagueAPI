#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/TencentQTNotification.hpp>
namespace lol {
  Result<std::map<std::string, TencentQTNotification>> GetLolTencentQtV1UiStates(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::map<std::string, TencentQTNotification>> {
        _client_.request("get", "/lol-tencent-qt/v1/ui-states?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, TencentQTNotification>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
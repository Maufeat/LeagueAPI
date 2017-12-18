#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/TencentQTNotification.hpp"
namespace lol {
  inline Result<std::map<std::string, TencentQTNotification>> GetLolTencentQtV1UiStates(LeagueClient& _client)
  {
    try {
      return Result<std::map<std::string, TencentQTNotification>> {
        _client.https.request("get", "/lol-tencent-qt/v1/ui-states?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, TencentQTNotification>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolTencentQtV1UiStates(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::map<std::string, TencentQTNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-tencent-qt/v1/ui-states?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::map<std::string, TencentQTNotification>> { response });
          else
            cb(_client,Result<std::map<std::string, TencentQTNotification>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
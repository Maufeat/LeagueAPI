#pragma once
#include "../base_op.hpp" 
#include "../def/PatcherNotification.hpp"
namespace lol {
  inline Result<std::vector<PatcherNotification>> GetPatcherV1Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PatcherNotification>> {
        _client_.request("get", "/patcher/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PatcherNotification>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
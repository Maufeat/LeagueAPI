#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/basicSystemInfo.hpp"
namespace lol {
  inline Result<basicSystemInfo> GetRiotclientSystemInfoV1BasicInfo(LeagueClient& _client)
  {
    try {
      return Result<basicSystemInfo> {
        _client.https.request("get", "/riotclient/system-info/v1/basic-info?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<basicSystemInfo> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotclientSystemInfoV1BasicInfo(LeagueClient& _client, std::function<void(LeagueClient&,const Result<basicSystemInfo>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/system-info/v1/basic-info?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<basicSystemInfo> { response });
          else
            cb(_client,Result<basicSystemInfo> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
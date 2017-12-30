#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherP2PStatus.hpp"
namespace lol {
  template<typename T>
  inline Result<PatcherP2PStatus> GetPatcherV1P2pStatus(T& _client)
  {
    try {
      return ToResult<PatcherP2PStatus>(_client.https.request("get", "/patcher/v1/p2p/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PatcherP2PStatus>(e.code());
    }
  }
  template<typename T>
  inline void GetPatcherV1P2pStatus(T& _client, std::function<void(T&, const Result<PatcherP2PStatus>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/p2p/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PatcherP2PStatus>(e));
            else
              cb(_client, ToResult<PatcherP2PStatus>(response));
        });
  }
}
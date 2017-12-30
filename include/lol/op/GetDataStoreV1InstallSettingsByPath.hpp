#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> GetDataStoreV1InstallSettingsByPath(T& _client, const std::string& path)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/data-store/v1/install-settings/"+to_string(path)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void GetDataStoreV1InstallSettingsByPath(T& _client, const std::string& path, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/data-store/v1/install-settings/"+to_string(path)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
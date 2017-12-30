#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RemotingHelpFormat.hpp"
namespace lol {
  template<typename T>
  inline Result<json> Help(T& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/Help?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "target", to_string(target) },
          { "format", to_string(format) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void Help(T& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/Help?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "target", to_string(target) },
          { "format", to_string(format) }, })), 
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
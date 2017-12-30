#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginLcdsResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLoginLcdsResponse> PostLolLoginV1SessionInvoke(T& _client, const std::string& destination, const std::string& method, const std::vector<json>& args)
  {
    try {
      return ToResult<LolLoginLcdsResponse>(_client.https.request("post", "/lol-login/v1/session/invoke?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "destination", to_string(destination) },
          { "method", to_string(method) }, })), 
        Args2String({ 
          { "args", to_string(args) }, }),
        Args2Headers({
          {"content-type", "application/x-www-form-urlencoded"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoginLcdsResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLoginV1SessionInvoke(T& _client, const std::string& destination, const std::string& method, const std::vector<json>& args, std::function<void(T&, const Result<LolLoginLcdsResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/session/invoke?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "destination", to_string(destination) },
          { "method", to_string(method) }, })), 
        Args2String({ 
          { "args", to_string(args) }, }),
        Args2Headers({
          {"content-type", "application/x-www-form-urlencoded"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoginLcdsResponse>(e));
            else
              cb(_client, ToResult<LolLoginLcdsResponse>(response));
        });
  }
}
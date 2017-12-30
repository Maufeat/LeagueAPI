#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderLinkResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<RecofrienderLinkResource>> GetRecofrienderV1Registrations(T& _client, const std::optional<std::string>& cb = std::nullopt)
  {
    try {
      return ToResult<std::vector<RecofrienderLinkResource>>(_client.https.request("get", "/recofriender/v1/registrations?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "cb", to_string(cb) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<RecofrienderLinkResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetRecofrienderV1Registrations(T& _client, const std::optional<std::string>& cb = std::nullopt, std::function<void(T&, const Result<std::vector<RecofrienderLinkResource>>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/registrations?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "cb", to_string(cb) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<RecofrienderLinkResource>>(e));
            else
              cb(_client, ToResult<std::vector<RecofrienderLinkResource>>(response));
        });
  }
}
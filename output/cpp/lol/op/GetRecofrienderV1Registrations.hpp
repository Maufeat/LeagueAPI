#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderLinkResource.hpp"
namespace lol {
  inline Result<std::vector<RecofrienderLinkResource>> GetRecofrienderV1Registrations(LeagueClient& _client, const std::optional<std::string>& cb = std::nullopt)
  {
    try {
      return Result<std::vector<RecofrienderLinkResource>> {
        _client.https.request("get", "/recofriender/v1/registrations?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "cb", to_string(cb) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<RecofrienderLinkResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV1Registrations(LeagueClient& _client, const std::optional<std::string>& cb = std::nullopt, std::function<void(LeagueClient&,const Result<std::vector<RecofrienderLinkResource>>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/registrations?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "cb", to_string(cb) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<RecofrienderLinkResource>> { response });
          else
            cb(_client,Result<std::vector<RecofrienderLinkResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
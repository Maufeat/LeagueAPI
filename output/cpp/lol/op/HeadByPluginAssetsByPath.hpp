#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> HeadByPluginAssetsByPath(LeagueClient& _client, const std::string& plugin, const std::string& path, const std::optional<std::string>& if_none_match = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("head", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth}, 
           { "if-none-match", to_string(if_none_match) }, }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void HeadByPluginAssetsByPath(LeagueClient& _client, const std::string& plugin, const std::string& path, const std::optional<std::string>& if_none_match = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("head", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth}, 
           { "if-none-match", to_string(if_none_match) }, }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
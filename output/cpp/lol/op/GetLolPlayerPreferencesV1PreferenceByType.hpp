#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetLolPlayerPreferencesV1PreferenceByType(LeagueClient& _client, const std::string& type, const std::optional<std::string>& hash = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "hash", to_string(hash) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPlayerPreferencesV1PreferenceByType(LeagueClient& _client, const std::string& type, const std::optional<std::string>& hash = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "hash", to_string(hash) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
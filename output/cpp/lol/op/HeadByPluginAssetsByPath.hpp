#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> HeadByPluginAssetsByPath(const LeagueClient& _client, const std::string& plugin, const std::string& path, const std::optional<std::string>& if_none_match = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("head", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth}, { "if-none-match", to_string(if_none_match) } }) );
  }
}
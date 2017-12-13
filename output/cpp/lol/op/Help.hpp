#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RemotingHelpFormat.hpp>
namespace lol {
  Result<json> Help(const LeagueClient& _client, const std::optional<std::string>& target = std::nullopt, const std::optional<RemotingHelpFormat>& format = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/Help?" + SimpleWeb::QueryString::create(Args2Headers({ { "target", to_string(target) },
    { "format", to_string(format) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}